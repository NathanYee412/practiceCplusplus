#include<iostream>
#include "Circle.h"

using namespace std;

int main() {

	Circle myObj;
	myObj.setRadius(2);
	cout << myObj.getArea();


	system("pause");
	return 0;
}