#include <iostream>
#include "Node.h"
#include "linkedlist.h"
#include "string.h"
#include <typeinfo>

using namespace std;



int main()
{
	int x=10;
	Node<int> a;
	a.setData(x);
	// cout<<a.getData()<<endl;
	linkedlist<int> b;
	// b.addFront(x);
	b.addFront(100);
	b.addFront(200);
	b.addBack(500);
	b.addBack(400);
	b.addMiddle(3,600);
	b.printList();
	float k = b.average();
	cout<<endl << k <<endl;
	b.reverse();
	k = b.average();
	cout<<endl << k <<endl<<endl;
	b.printList();
	// cout << endl << "size is " << b.getSize() << endl;
	Node<int>* z;
	int y;
	z=b.getFront();
	// cout<< z->getData();
	//b.printList();
	Node<int>* h;
	h=b.find(400);
	//cout<<h->getData();
	linkedlist<int> c;
	float m = c.average();
	cout<<m;
	// string f =typeid(m).name()<<endl;
	// cout << f;
	// cout << endl << c.isEmpty();


	return 0;
}