#include<iostream>
#include "BubbleSort.h"

using namespace std;


int main() {

	BubbleSort myObj;
	cout << "Before: ";
	myObj.print();
	cout << endl;

	myObj.sort();

	cout << "After:  ";
	myObj.print();
	cout << endl;
	
	system("pause");
	return 0;
}


