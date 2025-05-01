#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

using namespace std;

int main()
{
	// Before:
	Database database;

	// After:
	Database* database = new Database;

	cout << "1) Create\n";
	cout << "2) Display All\n";
	cout << "3) Display Name\n";
	cout << "4) Display Type\n";
	cout << "5) Load\n";
	cout << "6) Save\n";
	cout << "7) Quit\n";

	cout << "enter filename: ";
	string name;
	cin >> name;
	database.Load(name); // or database.Save(name);

	delete database;
	_CrtDumpMemoryLeaks();

}
