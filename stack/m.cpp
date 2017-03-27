#include <iostream>
#include "Stack.h"
#include "linkedlist.h"
#include "Node.h"
using namespace std;

int main()
{
	Stack <int> x;
	x.push(10);
	cout<<x.peek()<<"hello"<<endl;
	cout<<x.pop()<<endl;
	return 0;
}