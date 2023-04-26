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
	virtual bool is_full()const = 0;
	virtual bool is_empty()const = 0;
	virtual void push(const T&) = 0;
	virtual T pop() = 0;
	virtual void display()const = 0;
	virtual T top()const = 0;
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