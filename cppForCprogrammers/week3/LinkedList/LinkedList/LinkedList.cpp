#include "LinkedList.h"
#include <iostream>

void LinkedList::prepend(const int& newData)
{
	Node* newNode = new Node;
	newNode->next = head;
	newNode->data = newData;
	head = newNode;
}

void LinkedList::append(const int& newData)
{
	Node* newNode = new Node;
	Node* sdwNode = head;
	while (sdwNode->next != nullptr)
	{
		sdwNode = sdwNode->next;
	}
	sdwNode->next = newNode;
	newNode->data = newData;
	newNode->next = nullptr;
}

void LinkedList::printLinkedList()
{
	Node* sdwNode = head;
	do {
		std::cout << sdwNode->data << std::endl;
		sdwNode = sdwNode->next;
	} while (sdwNode!=nullptr);
}
