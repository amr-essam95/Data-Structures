#include "linkedlist.h"
#include "Node.h"

template <class T>
linkedlist<T>::linkedlist()
{
	chain=nullptr;
}
template <class T>
void linkedlist<T>::addFront(T d)
{
	Node<T>* temp=new Node<T> (d);
	temp->setNext(chain);
	chain=temp; 
}
template <class T>
void linkedlist<T>::addBack(T d)
{
	Node<T>* temp=new Node<T> (d);
	if (chain==NULL)
	{
		chain=temp;
	}
	Node<T>* ptr=chain;
	for(;ptr->getNext()!=NULL;ptr=ptr->getNext());
	ptr->setNext(temp); 
}
template <class T>
void linkedlist<T>::printAll(Node<T>* c)
{
	if(c!=NULL)
	{
		cout<<c->getData()<<"\n";
		printAll(c->getNext());
	}
}
template <class T>
void linkedlist<T>::printList()
{
	printAll(chain);
}