#include "polynomial.h"
#include "string.h"
#include <iostream>
#include <sstream>
#include <math.h>
#include "Node.h"
using namespace std;

polynomial::polynomial()
{
	order = -1;
}
polynomial::polynomial(double x[],int size)
{
	order =-1;
	for(int i =size ; i>0 ; i--)
	{
		addFront(x[i]);
	}
	order = size - 1;
}
void polynomial::fillWithArray(double x[],int size)
{
	for (int i = size -1 ; i >= 0 ; i--)
	{
		addFront(x[i]);
	}
	order = size - 1;
}
string polynomial::convert2String()
{
	if(getChain()==nullptr)
		return "f(x) = 0";
	Node<double>* ptr = getChain();
	int tempOrder = order;
	// string output ="";
	stringstream x;
	x<<"f(x) = ";
	while (ptr != nullptr)
	{
		double coeff = ptr->getData();
		if(coeff != 0)
		{
			if(tempOrder != order && coeff > 0)
			{
				// output+= " + ";
				x<<" + ";
				// cout<<output;
			}
			else if (tempOrder != order && coeff <0)
			{
				x<< " - ";
				coeff = -1*coeff;
			}
			if (tempOrder !=0)
			{
				if (coeff !=1)
				{
					x<< coeff;
					x<< "x^";
					x<<tempOrder;
				}
				else
				{
					x<< "x^";
					x<< tempOrder;
				}
			}
			else 
				x<< coeff;
		}
		tempOrder--;
		ptr = ptr->getNext();
	}
	string output;
	getline(x,output);
	return output;
}
void polynomial::printpolynomial()
{
	cout<<convert2String()<<endl;
}

string polynomial::multiply(polynomial y)
{
	if (getChain()==nullptr && y.getChain()==nullptr)
		return "f(x) = 0";
	else if (getChain()==nullptr)
		return convert2String();
	else if (y.getChain()==nullptr)
		return y.convert2String();

	int newOrder = order + y.order;
	int tempOrderX = order;
	int tempOrderY = y.order;
	Node<double>* ptrx = getChain();
	// cout<<ptrx;
	Node<double>* ptry = y.getChain();
	double* tempArray = new double[newOrder+1];
	for(int i = 0 ;i<newOrder+1;i++)
		tempArray[i]=0;
	while(ptrx != nullptr)
	{
		ptry = y.getChain();
		tempOrderY = y.order;
		while(ptry != nullptr)
		{
			int currentOrder = tempOrderX + tempOrderY;
			// cout<<currentOrder<<"  :  ";
			// cout<<ptrx->getData()<<" * "<<ptry->getData()<<" = ";
			double data = ptrx->getData() * ptry->getData();
			// cout<<data<<endl;
			tempArray[newOrder-currentOrder] += data;
			tempOrderY--;
			ptry = ptry->getNext();
		}
		ptrx = ptrx->getNext();
		tempOrderX--;
	}
	polynomial temp;
	temp.fillWithArray(tempArray,newOrder+1);
	return temp.convert2String();
}
double polynomial::evaluate(double x)
{
	Node<double>* ptrx = getChain();
	// cout<<"order: "<<order<<endl;
	// cout<<ptrx;
	if (ptrx == nullptr)
		return 0;
	int tempOrder = order ;
	double sum = 0;
	while (ptrx != nullptr)
	{
		double data = ptrx->getData();
		sum += data *(pow(x,tempOrder));
		ptrx = ptrx->getNext();
		tempOrder--;
	}
	return sum;
}
void polynomial::setOrder(int o)
{
	order = o;
}
int polynomial::getOrder()
{
	return order ;
}
void polynomial::differentiate()
{
	int tempOrder = order ;
	Node<double>* ptr = getChain();
	if (ptr == nullptr)
		return ;
	while(ptr != nullptr)
	{
		ptr->setData(ptr->getData() * tempOrder);
		if ((ptr->getNext()->getNext())==nullptr)
		{
			delete ptr->getNext();
			ptr = nullptr;
			break;
		}
		tempOrder--;
		ptr = ptr->getNext();
	}
	order --;
}
