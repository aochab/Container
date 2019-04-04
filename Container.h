#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Container
{
	public:
	char name[10];
	int unit;
	double capacity;
	double filled;

	Container();
	Container( char name[], int unit, double capacity, double filled );
	Container( const Container& container );

	double Add( double liquid );
	double Spill( double liquid );
	void Write();
};
