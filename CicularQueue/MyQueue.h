#pragma once
#include "Queue.h"
template<class T>
class MyQueue : public Queue<T>
{
private:
	int front;
	int rear;
	
public:
	MyQueue(int);
	~MyQueue();
	bool is_full() const;
	bool is_empty() const;
	void enqueue(const T&);
	T dequeue();
	T first_element()const;
	T last_element()const;
	void display()const;
};
// O(value) -> Time Complexity
template<class T>
MyQueue<T>::MyQueue(int s) :Queue<T>(s)       //O(1)
{
	front = 0;
	rear = 0;
	
}
template<class T>
MyQueue<T>::~MyQueue()      //O(1)
{
	front = 0;
	rear = 0;
}
template<class T>
bool MyQueue<T>::is_full() const        //O(1)
{
	if (front - rear == Queue<T>::size)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<class T>
bool MyQueue<T>::is_empty()const      //O(1)
{
	if (front - rear == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class T>
void MyQueue<T>::enqueue(const T& value)      //O(1)
{
	if (!is_full())
	{
		Queue<T>::arr[rear % Queue<T>::size] = value;
		rear++;
	}
	else
	{
		cout << "Queue is already full" << endl;
	}
}
template<class T>
T MyQueue<T>::dequeue()                         //O(1)
{
	if (!is_empty())
	{
		
		T temp = Queue<T>:: arr[front % Queue<T>::size];
		front++;
		return temp;
	}
	else
	{
		cout << "Queue is empty" << endl;
	}
}
template<class T>
T MyQueue<T>::first_element()const          //O(1)
{
	if (!is_empty())
	{
		return Queue<T>::arr[front];
	}
	else
	{
		cout << "Queue is empty" << endl;
	}
}
template<class T>
T MyQueue<T>::last_element()const        //O(1)
{
	if (!is_empty())
	{
		return Queue<T>::arr[rear-1];
	}
	else
	{
		cout << "Queue is empty" << endl;
	}
}
template<class T>
void MyQueue<T>::display()const
{
	cout << "Queue is!!!" << endl;
	for (int i = front; i < rear; i++)
	{
		cout << i << ".  " << Queue<T>::arr[i] << endl;
	}
}