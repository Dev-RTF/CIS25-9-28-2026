/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

// A pointer is a type of variable that holds a memory address
// using pointers is a little more flexible than passing in something as a reference

void thisFunctionTakesAPointer(int* ptr) {
	*ptr += 1;
}

void thisFunctionTakesAReference(int& ref) {
	ref += 1;
}

int main()
{
	int x = 5;
	cout << "\n\nThe value of x is " << x << "\n\n";
	cout << "\n\nThe address of x is " << &x << "\n\n";

	int* y = &x; // y is a pointer, the thing at that memory address is an integer
	cout << "\n\nThe value of y is " << y << "\n\n";
	cout << "\n\nThe address of y is " << &y << "\n\n"; // the address of a pointer

	x = 6;
	cout << "\n\nThe value of x is now " << x << "\n\n";

	// You can access the thing that is at the memory address with the star operator as well (dereferencing operator)
	*y = 3; // changes the value of x via its memory address

	cout << "\n\nThe value of x is NOW " << x << "\n\n";
	cout << "\n\nThe address of x is still " << &(*y) << "\n\n";

	// if you know you want a pointer, but don't know what you want to do with it yet
	int* z = nullptr; // a "box" for a memory address, but doesn't yet hold one

	int a = 99;
	z = &a;

	thisFunctionTakesAPointer(z);
	cout << "\n\na is now: " << a << "\n\n";

	thisFunctionTakesAReference(a);
	cout << "\n\na is now: " << a << "\n\n";

	return 0;
}