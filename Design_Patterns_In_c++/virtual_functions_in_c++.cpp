// Virtual Functions in c++

/*
Virtual Function in C++
Link: https://www.geeksforgeeks.org/virtual-function-cpp/
A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.

Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
They are mainly used to achieve Runtime polymorphism
Functions are declared with a virtual keyword in base class.
The resolving of function call is done at Run-time.
Rules for Virtual Functions

Virtual functions cannot be static and also cannot be a friend function of another class.
Virtual functions should be accessed using pointer or reference of base class type to achieve run time polymorphism.
The prototype of virtual functions should be same in base as well as derived class.
They are always defined in base class and overridden in derived class. It is not mandatory for derived class to override (or re-define the virtual function),
in that case base class version of function is used.
A class may have virtual destructor but it cannot have a virtual constructor.

*/

// CPP program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class" << endl;
	}

	void show()
	{
		cout << "show base class" << endl;
	}
};

class derived : public base {
public:
	void print()
	{
		cout << "print derived class" << endl;
	}

	void show()
	{
		cout << "show derived class" << endl;
	}
};

int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	// virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();
}

