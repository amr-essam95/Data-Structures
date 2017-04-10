#include <iostream>
#include "Node.h"
#include "linkedlist.h"
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
	cout << endl << "size is " << b.getSize() << endl;
	Node<int>* z;
	int y;
	z=b.getFront();
	cout<< z->getData();
	//b.printList();
	Node<int>* h;
	h=b.find(400);
	cout<<h->getData();
	linkedlist<float> c;
	cout << endl << c.isEmpty();


	return 0;
}