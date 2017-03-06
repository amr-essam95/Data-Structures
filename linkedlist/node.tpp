#include "Node.h"

template <class T>
Node<T>::Node()
{
	next=nullptr;
	data=0;
}
template <class T>
Node<T>::Node(T d)
{
	next= nullptr;
	data=d;
}
template <class T>
T Node<T>::getData()
{
	return data;
}
template <class T>
void Node<T>::setData(T d)
{
	data=d;
}
template <class T>
Node<T> * Node<T>::getNext()
{
	return next;
}
template <class T>
void Node<T>::setNext(Node *n)
{
	next=n;
}
