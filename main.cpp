#include "Container.h"
#include "DoubleContainer.h"

int main()
{
	DoubleContainer container = DoubleContainer("DoubleContainer", "Container1", 10, 4, 0 ,"Container2", 10, 2, 0);
	container.Write();

	try
	{
		container.Add(20);
		container.Write();
		container.Add(30);
		container.Write();
		container.Add(30);
	}
	catch( double liquid )
	{
		cout<< liquid << " liters of liquid were spilled "<< endl << endl;
	}


	try
	{
		container.Spill(20);
		container.Write();
		container.Spill(60);
		container.Write();
		container.Spill(30);
	}
	catch( double liquid )
	{
		cout << "You want to spill too much liquid" << endl << endl;
	}

	system( "pause" );
	return 0;
}
