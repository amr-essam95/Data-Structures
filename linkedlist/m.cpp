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
	b.addFront(x);
	b.addFront(100);
	b.addFront(200);
	b.addBack(300);
	b.addBack(400);
	b.printList();

	return 0;
}