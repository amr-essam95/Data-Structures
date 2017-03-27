#include <iostream>
#include "Stack.h"
#include "linkedlist.h"
#include "Node.h"
using namespace std;

int main()
{
	Stack <int> x;
	x.push(10);
	cout<<x.peek()->getData()<<"hello"<<endl;
	cout<<x.pop()->getData()<<endl;
	return 0;
}