#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Animal {
protected:
    string a_name;
    int a_lifespan;

public:
    virtual ~Animal() = default;

    virtual void Read(istream& in) {
        cout << "Enter name: ";
        in >> a_name;
        cout << "Enter lifespan: ";
        cin >> a_lifespan;
    }

    virtual void Write(ostream& out) const {
        out << a_name;
        out << a_lifespan << endl;
    }

    virtual void Read(ifstream& in) {
        in >> a_name >> a_lifespan;
    }

    virtual void Write(ofstream& out) const {
        out << a_name << endl;
        out << a_lifespan << endl;
    }

    virtual string GetType() const = 0;

    friend istream& operator>>(istream& in, Animal& animal) {
        animal.Read(in);
        return in;
    }

    friend ostream& operator<<(ostream& out, const Animal& animal) {
        animal.Write(out);
        return out;
    }

    friend ifstream& operator>>(ifstream& in, Animal& animal) {
        animal.Read(in);
        return in;
    }

    friend ofstream& operator<<(ofstream& out, const Animal& animal) {
        animal.Write(out);
        return out;
    }

    const string& GetName() const { return a_name; }
};

#endif