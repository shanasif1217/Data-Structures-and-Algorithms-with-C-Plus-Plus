#pragma once
#include "Stack.h"
template <class T>
class mystack :public stack<T>
{
public:
	mystack(int);
	~mystack();
	bool is_full();
	bool is_empty();
	void push(T);
	T pop();
	void display();
	T top();
};
template <class T>
mystack<T>::mystack(int s) :stack<T>(s)
{

}
template <class T>
bool mystack<T>::is_full()
{
	if (stack<T>::CurrentSize == stack<T>::size)
	{
		return true;
	}
	else
		return false;
}
template <class T>
bool mystack<T>::is_empty()
{
	if (stack<T>::CurrentSize == 0)
	{
		return true;
	}
	else
		return false;
}
template <class T>
void mystack<T>::push(T value)
{
	if (!is_full())
	{
		stack<T>::arr[stack<T>::CurrentSize++] = value;
		
	}
	else
		cout << "Stack is full" << endl;
}
template <class T>
T mystack<T>::pop()
{
	if (!is_empty())
	{
		stack<T>::CurrentSize--;
		return stack<T>::arr[stack<T>::CurrentSize];
	}
	else
		cout << "Stack is empty" << endl;
}
template <class T>
void mystack<T>::display()
{
	cout << "Stack is..." << endl;
	for (int i = 0; i < stack<T>::CurrentSize; ++i) {
		cout << i << ". " << stack<T>::arr[i] << endl;
	}
}
template <class T>
T mystack<T>::top()
{
	if (!is_empty())
	{
		return stack<T>::arr[stack<T>::CurrentSize - 1];
	}
	else
		cout << "Array is empty" << endl;
}
template <class T>
mystack<T>::~mystack()
{
	
}