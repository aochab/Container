#include "Container.h"


Container::Container()
{
	strcpy( this->name, "New" );
	unit = 10;
	capacity = 1 * unit;
	filled = 0;
}

//------------------------------------------------------------
Container::Container( char name[], int unit, double capacity, double filled )
{
	strcpy( this->name, name );
	this->unit = unit;
	this->capacity = capacity * unit;
	this->filled = filled;
}

//------------------------------------------------------------
Container::Container( const Container& container )
{
	strcpy( name, container.name );
	unit = container.unit;
	capacity = container.capacity;
	filled = container.filled;
}

//------------------------------------------------------------
double Container::Add( double liquid )
{
	if( ( filled + liquid ) > capacity )
	{
		double spilled = ( filled + liquid ) - capacity;
		filled += ( liquid - spilled );
		throw spilled;
	}
	else
	{
		filled += liquid;
	}

	return 0;
}

//------------------------------------------------------------
double Container::Spill( double liquid )
{
	if( ( filled - liquid ) < 0 )
	{
		double remained = -( filled - liquid );
		filled = 0;
		throw remained;
	}
	else
	{
		filled -= liquid;
	}

	return liquid;
}

//----------------------------------------------------------
void Container::Write()
{
	cout << "name: " << name << " capacity: " << capacity << " filled: " << filled << endl;
}
