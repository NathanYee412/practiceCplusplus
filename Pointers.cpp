#include<iostream>

using namespace std;

// function prototypes
int addInts(int* n);



int main() {

	// declare varible
	int num = 8;

	// create int pointer
	int *numPtr;

	// save address of num into numPtr
	numPtr = &num;

	cout << "This is the address of num " << numPtr << endl;
	cout << "This is the value of num: " << *numPtr << endl;

	// pass by reference into function 
	cout << "This function is pass by reference(address): " << addInts(numPtr) << endl;

	system("pause");
	return 0;

}

// function to pass by reference
int addInts(int* n) {
	int temp = 10;

	cout << "In func, var address: " << n << endl;
	cout << "In func, var value: " << *n << endl;

	return *n + temp;

}



