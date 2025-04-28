#include <vector>
#include <iostream>
#include <string>
#include "Pizza.h";

using namespace std;

class Database {
public:
	~Database() {
		for (Pizza* obj : objects) {
			delete obj;
		}
	}

	void Create(Pizza::eType type) {
		Pizza* obj = nullptr;

		switch (type) {
		case Pizza::eType::NEWYORK:
			obj = new NewYork();
			break;
		case Pizza::eType::CHICAGO:
			obj = new Chicago();
			break;
		case Pizza::eType::CALIFORNIA:
			obj = new California();
			break;
		}
		obj->Read(cout, cin);
		objects.pushback(obj);
	}

	void DisplayAll() {
		for (Pizza* obj : objects) {
			obj->Write(cout);
		}
	}

	void Display(const string& kind) {
		for (Pizza* obj : objects) {
			if (obj->GetKind() == kind) {
				obj->Write(cout);
			}
		}
	}

	void Display(Pizza::eType type) {
		for (Pizza* obj : objects) {
			if (obj->GetType() == type) {
				obj->Write(cout);
			}
		}
	}

private:
	vector<Pizza*> objects;
};