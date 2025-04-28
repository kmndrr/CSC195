// OperatorOverload.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"

using namespace std;

void operator + (Point& p1, Point& p2)
{
	Poinr, point;
	p1.x += p2.x;
	p1.y += p2.y;
}
int main()
{
	Point point1(10,14);
	point1.Write(cout);

	Point point2(5, 8);

	point1.Add(point2);

	point.Write(cout);
}
