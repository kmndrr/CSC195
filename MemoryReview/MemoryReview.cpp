#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};
// ** REFERENCE PARAMETER **
static void Square(int &sqNum) {  // create a function above main() called Square that takes in an intparameter
	sqNum = sqNum * sqNum; // in the function, multiply the int parameter by itself and assign it backto the parameter(i = i * i)
}
	
	
	
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to theparameter changes the calling variable ""\

	// ** POINTER PARAMETER **
void Double(int* dbNum) { // create a function above main() called Double that takes in an int pointerparameter
	*dbNum = *dbNum * 2; // in the function, multiply the int pointer parameter by 2 and assign itback to the parameter(i = i * 2)
	}
	
	// !! make sure to dereference the pointer to set the value and not set theaddress !!
	// did the int variable's value change when using the pointer? (insert answer)
	// Yes, the int num variable value changed

int main()
{
	// ** REFERENCE **
	int num = 3; // declare an int variable and set the value to some number (less than 10)
	int& numRef = num; // declare a int reference and set it to the int variable above

	cout << num << endl; 	// output the int variable

	numRef = 7; // set the int reference to some number

	cout << num << endl; // output the int variable

	// what happened to the int variable when the reference was changed? (insert answer)
	// the int variable was replaced with the new reference value

	cout << &num << endl; // output the address of the int variable
	cout << &numRef << endl;// output the address of the int reference
	// are the addresses the same or different? (insert answer)
	// Yes, the addresses are the same
	
	Square(num); // call the Square function with the int variable created in the REFERENCEsection
	cout << num << endl; // output the int variable to the console
	
	// ** POINTER VARIABLE **
	//
	int* numPtr = nullptr; // declare an int pointer, set it to nullptr (it points to nothing)
	numPtr = &num; // set the int pointer to the address of the int variable created in theREFERENCE section
	cout << numPtr; // output the value of the pointer
	// what is this address that the pointer is pointing to? (insert answer)
	// the same address as the reference and num variable
	cout << *numPtr; // output the value of the object the pointer is pointing to (dereference thepointer)

	//
	Double(numPtr); // call the Double function with the pointer created in the POINTER VARIABLEsection
	cout << *numPtr << endl; // output the dereference pointer
	cout << num << endl; // output the int variable created in the REFERENCE section


}

