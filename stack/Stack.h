#ifndef STACK_H
#define STACK_H
#include "linkedlist.h"

template <class T>
class Stack
{
private:
	linkedlist<T> list;
public:
	Stack();
	void push(T d);
	T pop();
	T peek();
};

#include "Stack.tpp"
#endif