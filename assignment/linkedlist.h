#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

using namespace std;

template <class T>
class linkedlist
{
	
private:
	Node<T> * chain;
public:
	linkedlist();
	// ~linkedlist();
	void addFront(T d);
	void addBack(T d);
	bool insert(int index,T d);
	void printAll(Node<T>* c);
	void printList();
	void remove(T x);
	void remove();	//remove first element
	void deleteAll(Node<T>* x);
	void clear();
	bool isEmpty();
	int getSize();
	void reverse();
	T average();
	Node<T>* find(T x);	
	Node<T>* getFront();
	Node<T>* getChain();
	
};
#include "linkedlist.tpp"
#endif