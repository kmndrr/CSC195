#include <iostream>
#include "Fraction.h"
using namespace mathlib;

using namespace std;

int main()
{
    Fraction* fraction1 = new Fraction;
    Fraction* fraction2 = new Fraction;
    Fraction* fraction3 = new Fraction;

    Fraction fraction1{ 15, 5 };
    cout << fraction1 << endl;

    Fraction fraction2{ 15, 6 };
    fraction2.Simplify();
    cout << fraction2 << endl;

    cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << endl;
    cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << endl;

    cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << endl;
    cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << endl;

    Fraction fraction3;
    cout << "input fraction (numerator - denominator): \n";
    cin >> fraction3;
    cout << fraction3 << endl;
    cout << fraction3.toDouble() << endl;
}