#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//reasons to pass by reference
//for classes like ostream//istream, cannot create copies, so pass by references
//ensure manipulation of variables inside the main method
//avoid creating copies for large datatyoes (resources/time efficeint)
//rule of thumb : use pass-by reference whenever possible 
// Exception: cannot point to nothing, so if parametr needs to point to a null value, then use a pointer instead 



void Write(string& text, ostream& ostream) {
    ostream << text;
}

void Read(String)
int main()
{
    string text = "Hello World\n";
    cout << text;

    //cin >> text;
    
    
    getline(cin, text);
    cout << text << endl;

    Write(text, cout);
}
