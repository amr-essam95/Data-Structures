#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

using namespace std;

template <class T>
class linkedlist
{
	Node<T> * chain;
public:
	linkedlist();
	// ~linkedlist();
	void addFront(T d);
	void addBack(T d);
	void printAll(Node<T>* c);
	void printList();
	
};
#include "linkedlist.tpp"
#endif