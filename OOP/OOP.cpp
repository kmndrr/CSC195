#include <iostream>
//#include "Animal.h"
#include "Marsupial.h"
using namespace std;

int main()
{
	Animal animal(5); //allocated memory on stack, no new keyword
	animal.Travel();

	Marsupial marsupial;
	marsupial.Travel();

	Animal* ptrAnimal = new Animal;
	(*ptrAnimal).Travel();
	ptrAnimal->Travel(); //does same thing as above

	Animal* ptrMarsupial = new Marsupial;
	ptrMarsupial->Travel();


	cout << animal.GetLimbs() << endl;

	{
		Animal* ptrAnim = new Animal;
	}
}

