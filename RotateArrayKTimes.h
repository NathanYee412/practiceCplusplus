/*
Write a function:

vector<int> solution(vector<int> &A, int K);

that, given an array A consisting of N integers and an integer K, returns the array A rotated K times.

For example, given

    A = [3, 8, 9, 7, 6]
    K = 3
the function should return [9, 7, 6, 3, 8]. Three rotations were made:

    [3, 8, 9, 7, 6] -> [6, 3, 8, 9, 7]
    [6, 3, 8, 9, 7] -> [7, 6, 3, 8, 9]
    [7, 6, 3, 8, 9] -> [9, 7, 6, 3, 8]
*/


// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
vector<int> shiftOnce(vector<int> &A);


vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)

    for(int i = 0; i < K; i++){
        A = shiftOnce(A);
    }
    
    return A;
}


vector<int> shiftOnce(vector<int> &A) {
    // size of vector
    int size = A.size();

    int last = A[size-1];

    for(int i = size-1; i > 0; i--) {
        A[i] = A[i - 1];
    }

    A[0] = last;

    return A;
}
