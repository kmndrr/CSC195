#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main()
{
	string fruits[5] = { "Banana", "Papaya", "Chikoo", "Strawberry", "Kiwi" };

	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(3);
	numbers.push_back(5);
	numbers.push_back(7);
	numbers.push_back(25);

	numbers.pop_back();
	numbers.pop_back();

	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}
	
	cout << "----------------------------------------------" << endl;

	//Pointer arithemetic

	string chemicals[5] = { "mercury", "hydrochloric acid", "chlorine", "bromine", "table salt" };

	cout << chemicals[2] << endl;
	cout << chemicals << endl; // returns address of first element in the array
	cout << chemicals[0] << endl;

	for (int i = 0; i < chemicals->size(); i++) {
		cout << chemicals[i] << endl;
	}

	cout << "----------------------------------------------" << endl;

	string* p = chemicals;
	cout << p << endl;
	cout << p++ << endl;
	cout << p++ << endl;

	cout << "----------------------------------------------" << endl;

	//containers
	list<string> cars = { " Toyota", "Ferrari", "Mercedes", "Volvo" };

	cout << cars.front() << endl;
	cout << cars.back() << endl;

	cars.pop_back();
	cout << cars.back() << endl;

	cars.push_front("Tesla");
	cout << cars.front() << endl;

	map<string, int> pet = { {"Dogs", 23}, {"Chameloeons", 3}, {"turtles", 12} };

	pet["Dogs"] = 50;

	cout << pet["Dogs"] << endl;

	pet["Spiders"] = 2;

	cout << pet.empty() << endl;
}