#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int age;
	string name;
	int id;

public:
	
	Student(int a, string n, int i) {
		age = a;
		name = n;
		id = i;
	}
	
	~Student() {}

	int getAge() {
		return age;
	}

	string getName() {
		return name;
	}

	int getId() {
		return id;
	}

	void setAge(int a) {
		age = a;
	}

	void setName(string n) {
		name = n;
	}

	void setId(int i) {
		id = i;
	}
};