#include<iostream>
#include "LinkedList.h"

using namespace std;

Node* reverseList(Node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}
	Node* cur = reverseList(head->next);
	head->next->next = head;
	head->next = NULL;
	return cur;

}


int main() {

	LinkedList myList;
	
	// populate linked list
	for (int i = 0; i < 20; i++) {
		myList.add(i);
	}

	//myList.displayList();

	Node* temp = reverseList(myList.getHead());

	while (temp != NULL) {
		cout << temp->val << " ";
		temp = temp->next;
	}


	return 0;
}