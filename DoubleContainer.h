#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Container.h"
using namespace std;

class DoubleContainer
{
	public:
	Container container1;
	Container container2;
	char name[10];
	int unit;
	double capacity;
	double filled;  //how much liquid is in the container
	

	DoubleContainer( char nameDoubleContainer[], char name1[], int unit1, double capacity1, double filled1, char name2[], int unit2, double capacity2, double filled2);
	double Add( double liquid );
	double Spill( double liquid );
	void Write();
};
