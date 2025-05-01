#pragma once
#ifndef DOG_H
#define DOG_H

#include "Animal.h"

using namespace std;

class Dog : public Animal {

public:
    void Read(istream& in) override {
        Animal::Read(in);
        cout << "Breed: ";
        in >> d_breed;
    }

    void Write(ostream& out) const override {
        Animal::Write(out);
        out << d_breed << endl;
    }

    void Read(ifstream& in) override {
        Animal::Read(in);
        in >> d_breed;
    }

    void Write(ofstream& out) const override {
        Animal::Write(out);
        out << d_breed << endl;
    }

    string GetType() const override {
        return "Dog";
    }

private:
    string d_breed;
};

#endif

