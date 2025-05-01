#pragma once
#ifndef DATABASE_H
#define DATABASE_H

#include "Dog.h"
#include "Cat.h"
#include <vector>
#include <memory>
#include <string>
#include <fstream>

using namespace std;

enum AnimalType { DOG = 1, CAT };

class Database {
private:
   vector<unique_ptr<Animal>> a_animals;

public:
    ~Database() = default;

    void AddAnimal(unique_ptr<Animal> animal) {
        a_animals.push_back(move(animal));
    }

    unique_ptr<Animal> Create(int type) {
        switch (type) {
        case DOG: return make_unique<Dog>();
        case CAT: return make_unique<Cat>();
        default: return nullptr;
        }
    }

    void DisplayAll() const {
        for (const auto& animal : a_animals) {
            cout << *animal << endl;
        }
    }

    void DisplayByName(const string& name) const {
        for (const auto& animal : a_animals) {
            if (animal->GetName() == name) {
               cout << *animal << endl;
            }
        }
    }

    void DisplayByType(const string& type) const {
        for (const auto& animal : a_animals) {
            if (animal->GetType() == type) {
               cout << *animal <<endl;
            }
        }
    }

    void Load(const string& filename) {
        a_animals.clear();
        ifstream input(filename);
        if (input.is_open()) {
            while (!input.eof()) {
                int type;
                input >> type;
                if (input.fail()) break;

                auto animal = Create(type);
                if (animal) {
                    input >> *animal;
                    a_animals.push_back(move(animal));
                }
            }
        }
    }

    void Save(const string& filename) const {
        ofstream output(filename);
        if (output.is_open()) {
            for (const auto& animal : a_animals) {
                int type = animal->GetType() == "Dog" ? DOG : CAT;
                output << type << endl;
                output << *animal;
            }
        }
    }
};

#endif
