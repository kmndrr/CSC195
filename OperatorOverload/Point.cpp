#include <iostream>
#include "Point.h"

using namespace std;

namespace ost
{
	void Point::Write(ostream& ostream)
	{
		ostream << x << " : " << y << endl;
	}

	void Point::Add(Point& point)
	{
		x += point.x;
		y += point.y;
	}

	//operator overloads outside a class jiust requires the left-hand side & right-hand side
	//of the symbol as parametera

	Point& Point::operator+(Point& point)
	{
		Point p;
		p.x = x + point.x;
		p.y = y + point.y;

		return p;
	}

	Point Point::operator *(float s)
	{
		return Point(x * s, y * s);
	}
}