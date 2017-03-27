#include <iostream>
#include <stack>
using namespace std;

void removeRepeated(int x[],int len)
{
	stack<int> s;
	int index;
	s.push(x[0]);
	index=1;
	for (int i=1;i<len;i++)
	{
		if(x[i]!=s.top())
		{
			s.push(x[i]);
			x[index] = x[i];
			index++;
		}
	}
	for (int i=index;i<len;i++)
		x[i]=0;
}

int main()
{
	int x[]={1,1, 1, 2, 2, 3, 3, 3, 4, 5, 5, 6, 7};
	// len=x.length();
	// cout<<sizeof(x)/sizeof(x[0]);
	int len = sizeof(x)/sizeof(x[0]);
	removeRepeated(x,len);
	len = sizeof(x)/sizeof(x[0]);
	for (int i=0;i<len;i++)
	{
		cout<<x[i]<<endl;
	}

	return 0;
}