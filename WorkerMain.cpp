#include<iostream>
#include<string>
#include "Payroll.h"

using namespace std;


int main() {

	bool x = true;
	int e;
	double h, r;
	string n;

	cout << "Enter the employees number: ";
	cin >> e;
	cout << "Enter the employees name: ";
	cin >> n;
	cout << "Hours worked this week: ";
	cin >> h;
	cout << "Employees Hourly Rate: ";
	cin >> r;

	Worker nate(e, h, r, n);

	nate.printData(); 

	Ceo nate1(e,h,r,n)



	system("pause");
	return 0;
}
