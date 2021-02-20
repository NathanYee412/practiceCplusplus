/*


This is a demo task.

Write a function:

    int solution(vector<int> &A);

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [−1, −3], the function should return 1.

Write an efficient algorithm for the following assumptions:

        N is an integer within the range [1..100,000];
        each element of array A is an integer within the range [−1,000,000..1,000,000].


*/

// you can use includes, for example:
// #include <algorithm>
#include<algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    // check if empty
    if(A.empty()) {
        return 1;
    }
    
    // sort A 
    vector<int> Asort;
    Asort = A;
    sort(Asort.begin(), Asort.end());
    
    // size of Asort
    int size = Asort.size();
    
    // check if whole list is negative
    bool flag = false;
    for(int i = 0; i < size; i++) {
        if(Asort[i] >= 1) {
            flag = true;
        }
    }
    if(flag == false) {
        return 1;
    }
    
    
    int num = 1;
    
    for(int i = 0; i < size; i++) {
        
        if(Asort[i] == num && Asort[i] != Asort[i+1]) {
            num++;
        } 
    }
    
    return num;
}
