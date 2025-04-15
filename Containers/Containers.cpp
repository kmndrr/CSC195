#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>

using namespace std;

static void funcArray(){
	cout << "Array Example: ";

	string week[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" }; // declares & inits array
	
	int length = sizeof(week) / sizeof(week[0]); // learned sizeof from stack overflow

	cout << "Days in week: " << length << endl;

	for (int i = 0; i < 7; i++) { // goes thru array and prints each element
		cout << week[i] << endl;
	}
	cout << "----------------------------------------------" << endl;
}

static void funcVector() {
	cout << "Vector Example: ";
	vector<int> numbers = { 1,3,5 }; // declares and inits vector
	numbers.push_back(6); // adds element to end
	numbers.push_back(8);
	numbers.pop_back(); //removes last element


	for (int i = 0; i < numbers.size(); i++) { // goes thry vector and prints each element
		cout << numbers[i] << endl;
	}
	cout << "----------------------------------------------" << endl;

}

static void funcList() {
	cout << "List Example: ";
	list<string> fruits = { " Strawberry", "Banana", "Blueberry" }; // declares and inits lust


	fruits.push_back("Kiwi"); //adds element to end
	fruits.push_front("Apple"); //adds element to front
	fruits.remove("Blueberry"); //removes specific element

	for (const string& fruit : fruits) { //goes thru list and prints each fruit in fruits
		cout << fruit << endl;
	}

	cout << "----------------------------------------------" << endl;
}

static void funcMap() { 
	cout << "Map Example: ";
	map<string, int> groceries = { {"Beans", 2}, {"Avacado", 3}, {"Tortillas", 12} }; //declares and inits map

	groceries["Beans"] = 4; // changing value based on key

	for (const auto& item : groceries) { // goes thru map and prints each value & key pairing 
		cout << item.first << ": " << item.second << endl;
	}

	cout << "----------------------------------------------" << endl;

}

int main()
{
	funcArray();
	funcVector();
	funcList();
	funcMap();
	//calling each function
}