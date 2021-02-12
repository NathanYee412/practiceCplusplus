#include<iostream>
#include<string>
#include "LinkedList.h"
#include "Student.h"
using namespace std;

// this class function takes in an ip address and adds [.] around each '.'
class Solution {
public:
    string defangIPaddr(string address) {
        int i = 0;
        while (i < address.length()) {
            if (address[i] == '.') {
                address.erase(i, 1);
                address.insert(i, "[.]");
                i += 2;
            }
            i++;
        }

        return address;
    }
};


struct ListNode {
    int val;
    ListNode* next;
    //constructor
    ListNode(int value, ListNode* next1 = NULL) {
        val = value;
        next = next1;
    }
};



int main() {

    //creates the first node with value 8
    //signifies end of list using NULL
    ListNode* head;
    head = new ListNode(8);
    
    // this is done in the constructor of ListNode
    //head->val = 8;
    //head->next = NULL;

    //create second node with value 10
    ListNode* second;
    second = new ListNode(10);
    head->next = second;

    //loop to print  two vals
    ListNode* temp;
    temp = head;
    for (int i = 0; i < 2; i++) {
        cout << temp->val << endl;
        temp = temp->next;
    }


    /*
    defang IP address function test using solution class 

    Solution testobj;
    std::cout << testobj.defangIPaddr("1.1.1.1");
    */

    /*
    Studen Class tests
    */

    Student nate(22, "Nathan", 123);
    cout << nate.getAge() << " " << nate.getName() << " " << nate.getId() << endl;


    return 0;
    system("pause");
}