#pragma once
#include<iostream>
using namespace std;

class Node {
public:
	int val;
	Node* next;
};

class LinkedList {
private:
	Node* head;
public:
	LinkedList() { head = NULL; }
	~LinkedList() { };
	void add(int num);
	void removeNode(Node* node);
	void displayList();
	Node* reverseList(Node* head);
	Node* getHead();
};

// return the head of the linked
Node* LinkedList::getHead() {
	return head;
}

// Add a new node to the end of the linked list
void LinkedList::add(int num) {
	Node* newNode = new Node();
	newNode->val = num;
	newNode->next = NULL;
	
	if (head == NULL) {
		head = newNode;
	}

	else {
		Node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

// recursively reverse linked list 
Node* LinkedList::reverseList(Node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}
	Node* cur = reverseList(head->next);
	head->next->next = head;
	head->next = NULL;
	return cur;

}

// remove given node from list
void LinkedList::removeNode(Node* node) {
	node->val = node->next->val;
	node->next = node->next->next;
}

// display linked list 
void LinkedList::displayList() {
	
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->val << endl;
		temp = temp->next;
	}
}

/*
// linked list destructor 
LinkedList::~LinkedList() {
	Node* nodeptr;
	for (nodeptr = head; head; nodeptr = head) {
		head = head->next;
		delete nodeptr;
	}
}

*/
