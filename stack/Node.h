#ifndef NODE_H
#define NODE_H

using namespace std;

template <class T>
class Node
{
	T data;
	Node *next;
public:
	Node();
	Node(T d);
	T getData();
	void setData(T d);
	Node * getNext();
	void setNext(Node *n);
	// ~Node();
	
};
#include "node.tpp"
#endif