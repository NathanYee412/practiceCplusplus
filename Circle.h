#pragma once
#include<iostream>

using namespace std;


class Circle {
private:
	int radius;
public:
	Circle();
	~Circle();
	void setRadius(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}

Circle::~Circle() {

}

void Circle::setRadius(int r) {
	radius = r;
}

double Circle::getArea() {
	return 3.14159 * radius * radius;
}