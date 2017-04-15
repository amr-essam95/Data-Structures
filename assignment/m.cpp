#include <iostream>
#include "polynomial.h"
#include "string.h"

using namespace std;
int main()
{
	polynomial c;
	double v[10] = {10.5,9.4,8.2,7,6,5.6,4.4,3,2,1};
	c.fillWithArray(v,10);
	c.printpolynomial();
	c.differentiate();
	c.printpolynomial();
	return 0;
}