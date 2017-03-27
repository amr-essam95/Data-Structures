#include "Stack.h"
#include "linkedlist.h"
#include "Node.h"

template <class T>
Stack<T>::Stack()
{
	;
}

template <class T>
void Stack<T>::push (T d)
{
	list.addFront(d);
}
template <class T>
T Stack<T>::pop()
{
	T x = list.getFront();
	list.remove();
	return x;
}
template <class T>
T Stack<T>::peek()
{
	return list.getFront();
}