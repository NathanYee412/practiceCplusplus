#pragma once
#include<iostream>
#include<string>
using namespace std;


class Worker {
private:
	int empNumber;
	double hours, payRate;
	string name;
public:
	Worker();
	Worker(int eNum, double h, double p, string n);
	int getEmpNum();
	double getHours();
	double getPayRate();
	double getGrossPay();
	string getName();
	void printData();
};


Worker::Worker() {
	empNumber = 000;
	hours = 0.00;
	payRate = 0.00;
	name = "John Doe";
}

Worker::Worker(int eNum, double h, double p, string n) {
	empNumber = eNum;
	hours = h;
	payRate = p;
	name = n;
}

int Worker::getEmpNum() {
	return empNumber;
}

double Worker::getHours() {
	return hours;
}

double Worker::getPayRate() {
	return payRate;
}

double Worker::getGrossPay() {
	return payRate * hours;
}

string Worker::getName() {
	return name;
}

void Worker::printData() {
	cout << "Name:            " << name << endl;
	cout << "Employee Number: " << empNumber << endl;
	cout << "Hours Worked:    " << hours << endl;
	cout << "Hourly Pay Rate: " << payRate << endl;
	cout << "Gross Pay:       $" << payRate * hours << endl;
}

