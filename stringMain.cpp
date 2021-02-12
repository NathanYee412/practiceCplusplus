#include<iostream>
#include<vector>
using namespace std;


int main() {

	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);

	int temp;
	int index = 0;
	int shift = 1;

	for (int i = 0; i < nums.size() - 1; i++) {
		nums[(i + 2) % nums.size()] = nums[i];
	}

	for (int i = 0; i < nums.size() - 1; i++) {
		cout << nums[i] << " ";
	}




	system("pause");
	return 0;
}