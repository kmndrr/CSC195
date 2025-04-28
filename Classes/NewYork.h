#pragma once
#include "Pizza.h"
#include <iostream>
#include <string>
//#include <integer>

using namespace std;

class NewYork : public Pizza {
	private
		int cookLevel;
	
public:
	void Read(std::ostream& ostream, std::istream& istream) override {
		Pizza::Read(ostream, istream);
		ostream << "Enter well done level";
		istream >> cookLevel;
	}

	void Write(std::ostream& ostream) override {
		Pizza::Write(ostream);
		ostream << "Well Done" << cookLevel << "\n";
	}



};
