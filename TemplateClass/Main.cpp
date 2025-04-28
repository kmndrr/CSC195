#include <iostream>
#include <string>
#include "TemplateClass.h"

using namespace std;


int main()
{

	cout << myMethod::max<float, int>(6.56f, 56) << endl;

	TemplateClass<int> tp1;
	TemplateClass<float> tp2;

	TemplateClass<> tp3;

	Array<string, 5> strAr;

	strAr[2] = "Banana";
}