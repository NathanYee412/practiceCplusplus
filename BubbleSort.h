#pragma once
#include<iostream>
#include<vector>

using namespace std;

class BubbleSort {
private:
	vector<int> list;
public:
	BubbleSort();
	BubbleSort(std::vector<int> list);
	void sort();
	void print();
};


BubbleSort::BubbleSort() {
	//vector<int> temp;
	//for (int i = 20; i > 0; i--) {
	//	temp.push_back(i);
	//}

	list.push_back(7);
	list.push_back(2);
	list.push_back(3);
	list.push_back(8);
	list.push_back(9);
	list.push_back(1);
}

BubbleSort::BubbleSort(vector<int> inList) {
	list = inList;
}

void BubbleSort::sort() {
	int index = 0;
	int temp;
	bool swap;

	do {
		swap = false;
		for (int index = 0; index < list.size() - 1; index++) {
			if (list[index] > list[index + 1]) {
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}


void BubbleSort::print() {
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << " ";
	}
}