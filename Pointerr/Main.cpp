#include <iostream>
using namespace std;

template<typename T> 

class smart_ptr
{
public:
	smart_ptr(T* ptr = nullptr) : _ptr{ ptr } {}
	smart_ptr(const smart_ptr&) = delete; //dont allow to copy 
	smart_ptr& operator = (const smart_ptr&) = delete; //dont allow us to use the assignment 
	~smart_ptr() { if (_ptr) delete _ptr; }

	T& operator 
};
int main()
{
	//int arr[] = { 2,4,6,8 };

	//int* p = arr; //&arr[0]
	//p++;
	//p++;
	//p--;
	//cout << *p << endl;

	
	int* p = new int{ 5 };

	cout << *p << endl;

	delete p;

	int i;
	{
		i = 5;
	}

	{
		smart_ptr<int> sp{ new int(25) };
		//only one owneer at a time - cannot create copies
	}


	_CrtDumpMemoryLeaks();

}