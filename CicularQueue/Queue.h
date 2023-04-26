#pragma once
#include<iostream>
using namespace std;
template<class T>
class Queue
{                                //ATC
protected:
	T* arr;
	int size;
public:
	Queue(int);
	~Queue();
	virtual bool is_full()const = 0;  //To check either the Queue is Full or Not   
	virtual bool is_empty()const = 0; //To check either the Queue is Empty of not
	virtual void enqueue(const T&) = 0;   //To Add a new value in Queue
	virtual T dequeue() = 0;   //To Deque very first value from Queue (mean remove)
	virtual T first_element() const = 0;  //To Check from where Queue is starting
	virtual T last_element() const = 0; //To check at where Queue is ending
	virtual void display()const = 0;  //To Display all the values of Queue
};
template<class T>
Queue<T>::Queue(int s)
{
	size = s;
	arr = new T[s];
}
template<class T>
Queue<T>::~Queue()
{
	delete[]arr;
	arr = nullptr;
}