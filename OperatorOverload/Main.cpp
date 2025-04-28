#include <iostream>
#include "Point.h"

using namespace ost;
using namespace std;


int main()
{
	Point point1(10, 14);
	point1.Write(cout);

	Point point2(5, 8);

	Point point3 = (point1 + point2) * 3.0f;

	point3.Write(cout);

	cout << point3;
}
