#include <iostream>
#include "polynomial.h"
#include "linkedlist.h"
#include "string.h"

using namespace std;
int main()
{
	linkedlist<double> list ;
	list.addFront(10);
	cout<<"Only one element in List"<<endl;
	list.printList();

	list.reverse();
	cout<<"List after reversing only one element"<<endl;
	list.printList();


	return 0;
}