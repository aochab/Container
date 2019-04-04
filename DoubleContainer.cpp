#include "DoubleContainer.h"

DoubleContainer::DoubleContainer( char nameDoubleContainer[], char name1[], int unit1, double capacity1, double filled1, char name2[], int unit2, double capacity2, double filled2)
	:container1(name1,unit1,capacity1,filled1),
	container2(name2,unit2,capacity2,filled2)
{
	strcpy( this->name, nameDoubleContainer );
	this->unit = container1.unit;
	this->capacity = container1.capacity + container2.capacity;
	this->filled = container1.filled + container2.filled;
};

//------------------------------------------------------------
double DoubleContainer::Add( double liquid )
{
	//Add liquid and checks whether the liquid will overflow the container
	try 
	{
		container1.Add(liquid);
	}
	catch( double liquid )
	{
		try
		{
			container2.Add(liquid);
		}
		catch( double liquid )
		{
			throw liquid; //Throw how much liquid was spilled
		}
	}
	
	return 0;
}

//------------------------------------------------------------
double DoubleContainer::Spill( double liquid )
{
	//Spill out the liquid and checks whether is enough liquid to spill
	try
	{
		container1.Spill(liquid);
	}
	catch(  double liquid )
	{
		try
		{
			container2.Spill(liquid);
		}
		catch( double liquid )
		{
			throw liquid; //Throw how much liquid can't be poured out
		}
	}
}

//----------------------------------------------------------
void DoubleContainer::Write()
{
	cout << "DoubleContainer:" << endl;
	cout << container1.name << " capacity: " << container1.capacity << " filled: " << container1.filled << endl;
	cout << container2.name << " capacity: " << container2.capacity << " filled: " << container2.filled << endl;
}
