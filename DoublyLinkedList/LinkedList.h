#pragma once
#include "Node.h"
class LinkedList
{
protected:
	Node* head;
	Node* tail;
public:
	LinkedList();
	virtual void InsertatHead(int) = 0;
	virtual void InsertatTail(int) = 0;
	virtual int DeletefromTail() = 0;
	virtual int DeletefromHead() = 0;
	virtual void InsertSorted(int) = 0;
	virtual void displayfromhead() = 0;
	virtual void displayfromtail() = 0;
};
LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
}