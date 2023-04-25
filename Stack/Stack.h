#pragma once
#include<iostream>
using namespace std;
template <class T>
class stack {
protected:
	T* arr;
	int size;
	int CurrentSize;
public:
	stack(int);
	~stack();
	virtual bool is_full() = 0;
	virtual bool is_empty() = 0;
	virtual void push(T) = 0;
	virtual T pop() = 0;
	virtual void display() = 0;
	virtual T top() = 0;
};
template <class T>
stack<T>::stack(int s)
{
	size = s;
	arr = new T[s];
	CurrentSize = 0;
}
template <class T>
stack<T>::~stack()
{
	delete[]arr;
	arr = nullptr;
	size = 0;
	CurrentSize = 0;
}