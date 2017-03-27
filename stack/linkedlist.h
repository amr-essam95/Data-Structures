#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

using namespace std;

template <class T>
class linkedlist
{
	
public:
	Node<T> * chain;
	linkedlist();
	// ~linkedlist();
	void addFront(T d);
	void addBack(T d);
	void addMiddle(int index,T d);
	void printAll(Node<T>* c);
	void printList();
	Node<T>* find(T x);
	void remove(T x);
	void remove();	//remove first element
	void deleteAll(Node<T>* x);
	void clear();
	Node<T>* getFront();
	
};
#include "linkedlist.tpp"
#endif