#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pizza
{
protected:
    string kind;
    int size;
public:
    enum class eType { NEWYORK, CHICAGO, CALIFORNIA };

    virtual ~Pizza() = default;

    virtual void Read(std::ostream& ostream, std::istream& istream) {
        ostream << "Enter kind of pizza: ";
        istream >> kind;
        ostream << "Enter size (9, 14, 18): ";
        istream >> size;

    }

    virtual void Write(std::ostream& ostream) {
        ostream << "Kind: " << kind << "\n";
        ostream << "Size: " << size << "\n";
    }

    string GetKind() {
        return kind;
    }

    virtual eType GetType() = 0;

};

