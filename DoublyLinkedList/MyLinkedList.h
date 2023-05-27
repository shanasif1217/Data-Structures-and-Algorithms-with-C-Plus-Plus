#pragma once
#include "LinkedList.h"
class MyLinkedList : public LinkedList
{
public:
	MyLinkedList();
	void InsertatHead(int);
	void InsertatTail(int);
	int DeletefromTail();
	int DeletefromHead();
	void InsertSorted(int);
	void displayfromhead();
	void displayfromtail();
};
MyLinkedList::MyLinkedList() = default;


void MyLinkedList::InsertSorted(int value)
{
	if (head == nullptr && tail == nullptr)
	{
		InsertatTail(value);
	}
	else if (value <= head->data)
	{
		InsertatHead(value);
	}
	else if (value >= tail->data)
	{
		InsertatTail(value);
	}
	else
	{
		Node* temp = head;
		while (1)
		{
			if (value >= temp->data && value < temp->next->data)
			{
				Node* newnode = new Node;
				newnode->data = value;
				newnode->next = temp->next;
				newnode->previous = temp;

				temp->next->previous = newnode;
				temp->next = newnode;


				break;
			}
			temp = temp->next;
		}
	}
}
void MyLinkedList::InsertatHead(int value)
{
	Node* newnode;
	newnode = new Node;
	newnode->previous = nullptr;
	newnode->next = nullptr;
	newnode->data = value;
	if (head == nullptr && tail == nullptr)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		newnode->next = head;
		head->previous = newnode;
		head = newnode;
	}
}
void MyLinkedList::InsertatTail(int value)
{

	Node* newnode;
	newnode = new Node;
	newnode->previous = nullptr;
	newnode->next = nullptr;
	newnode->data = value;
	if (head == nullptr && tail == nullptr)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		newnode->previous = tail;
		tail->next = newnode;
		tail = newnode;
	}
}
void MyLinkedList::displayfromhead()
{
	if (head == nullptr && tail == nullptr)
		cout << "LinkedList is empty" << endl;

	else
	{
		Node* temp;
		temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;



		}
		cout << endl;
	}
}
void MyLinkedList::displayfromtail()
{
	if (head == nullptr && tail == nullptr)
		cout << "LinkedList is empty" << endl;

	else
	{
		Node* temp;
		temp = tail;
		while (temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->previous;



		}
		cout << endl;
	}
}
int MyLinkedList::DeletefromHead()
{
	int rv = head->data;
	head = head->next;
	delete head->previous;
	head->previous = nullptr;
	return rv;
}
int MyLinkedList::DeletefromTail()
{
	int rv = tail->data;
	tail = tail->previous;
	delete tail->next;
	tail->next = nullptr;
	return rv;
}