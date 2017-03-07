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
template <class T>
Node<T>* linkedlist<T>::find(T x)
{
	Node<T>* temp=chain;
	while(temp!=NULL)
	{
		if(temp->getData()==x)
			return temp;
		temp=temp->getNext();
	}
	return NULL;
}
template <class T>
void linkedlist<T>::remove(T x)
{
	if (chain->getData()==x)
	{
		Node<T>* temp=chain;
		chain=chain->getNext();
		delete temp;
		return;
	}
	Node<T>* temp=chain;
	for(;temp->getNext()!=NULL;temp=temp->getNext())
	{
		if(temp->getNext()->getData()==x)
		{
			Node<T> * req=temp->getNext();
			temp->setNext(req->getNext());
			delete req;
			return;
		}
	}

}