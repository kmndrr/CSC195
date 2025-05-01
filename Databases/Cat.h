#pragma once
#ifndef CAT_H
#define CAT_H
#include "Animal.h"

using namespace std;

class Cat : public Animal {

public:
    void Read(istream& in) override {
        Animal::Read(in);
        cout << "Lives: ";
        in >> c_lives;
    }

    void Write(ostream& out) const override {
        Animal::Write(out);
        out << c_lives << std::endl;
    }

    void Read(ifstream& in) override {
        Animal::Read(in);
        in >> c_lives;
    }

    void Write(ofstream& out) const override {
        Animal::Write(out);
        out << c_lives << endl;
    }

    string GetType() const override {
        return "Cat";
    }
private:
    string c_lives;
};

#endif
