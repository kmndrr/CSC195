#include <iostream>
#include <string>

using namespace std;

int main() {
	Database database;
	bool quit = false;

	while (!quit) {
		cout << "1.Create\n 2. Display All/n 3.Display by kind\n 4. Display by type\n 5. Quit\n";
		int choice;
		cin >> choice;

		switch (choice) {
		case 1: {
			cout << "Enter type (0 = New York, 1 = Chicago, 2 = California)";
			int t;
			cin >> t;
			database.Create(static_cast<Pizza::eType(t));
			break;
		}
		case 2:
			database.DisplayAll();
			break;
		}
		case 3: 

	}
}