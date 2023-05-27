#include "MyLinkedList.h"
int main()
{
	MyLinkedList obj1;
	obj1.InsertatTail(5);
	obj1.InsertatTail(6);
	obj1.InsertatTail(7);
	obj1.InsertatTail(8);
	obj1.InsertatTail(9);
	obj1.InsertatTail(10);
	obj1.InsertatHead(4);
	obj1.InsertatHead(3);
	obj1.InsertatHead(2);
	obj1.InsertatHead(1);
	cout << "Here is your LinkedList" << endl;
	obj1.displayfromhead();
	obj1.displayfromtail();

	obj1.DeletefromHead();
	obj1.DeletefromTail();

	obj1.InsertSorted(0);
	obj1.InsertSorted(100);
	obj1.InsertSorted(50);
	cout << "Here is your LinkedList after InsertSorted function" << endl;
	obj1.displayfromhead();
	obj1.displayfromtail();


	return 0;
}