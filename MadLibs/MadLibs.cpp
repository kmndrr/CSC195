#include <iostream>
#include <random>
using namespace std;

#include <iostream>

void initialize() {
    string celebrity;
    int number;
    string disaster;

    srand(time(0));
    int randomNum = (rand() % 10);

    cout << "Enter Celebrity: " << endl;
    cin >> celebrity;
    cout << endl;
    cout << "Enter Number: ";
    cin >> number;
    cout << endl;
    cout << "Enter a disaster: ";
    cin >> disaster;
    cout << endl;

    cout << celebrity << " saved " << number << " refugees from a " << disaster << " " << randomNum << " times!!";

}

int main()
{
    initialize();
}

