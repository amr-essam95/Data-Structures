#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include "string.h"
#include "linkedlist.h"
#include "Node.h"
#include <sstream>

class polynomial : public linkedlist<double>
{
private:
	int order;
public:
	polynomial();
	polynomial(double x[],int size);
	void fillWithArray(double x[],int size);
	void print();
	string multiply(polynomial y);
	string convert2String();
	void printpolynomial ();
	double evaluate(double x);
	void differentiate();
	void setOrder(int o);
	int getOrder();	
};
#include "polynomial.cpp"
#endif