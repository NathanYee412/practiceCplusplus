/*
We are given two strings, A and B.

A shift on A consists of taking string A and moving the leftmost character to the rightmost position. For example, if A = 'abcde', then it will be 'bcdea' after one shift on A. Return True if and only if A can become B after some number of shifts on A.

Example 1:
Input: A = 'abcde', B = 'cdeab'
Output: true

Example 2:
Input: A = 'abcde', B = 'abced'
Output: false
*/

class Solution {
public:
    bool rotateString(string A, string B) {
        
        // check if string is empty
        if(A == "" && B == "") {
            return true;
        }
        
        
        // return var 
        bool isRotated = false;
        
        // copy string to test varible 
        string Acopy = A;
        
        // loop through to see if any rotations equal string B
       for(int i = 0; i < A.size(); i++) {
           
           // call helper function 
           Acopy = rotateOnce(Acopy);
           
           // check if new string == B
           if(Acopy == B) {
               return true;
           }
       }
        
        // return result 
        return isRotated;
        
 
    }
    
    string rotateOnce(string N) {
         // first char
        char first = N[0];
        
        // temp char
        char temp;
        
        // move chars back by one
        for(int i = 1; i < N.size(); i++) {
            temp = N[i];
            N[i-1] = N[i];
        }
        
        // set last char to first
        N[N.size()-1] = first;
        
        return N;
    }
};
