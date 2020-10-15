#pragma once

struct Node {
	int data;
	Node* next;
};

class LinkedList
{
public:
	LinkedList():head(nullptr) {};
	void prepend(const int& newData);
	void append(const int& newData);
	void printLinkedList();
private:
	Node *head;
};

