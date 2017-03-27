#include <iostream>
#include <stdlib.h>
using namespace std;

int findMax(int arr[10],int n)
{
	if(n==1)
		return arr[0];
	int max=findMax(arr,n-1);
	if (arr[n-1]>max)
		return arr[n-1];
	return max;
}

int main()
{
	int arr[10];
	int x ;
	for(int i=0;i<10;i++)
	{
		x=rand()%1000;
		arr[i]=x;
	}
	for (int i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl<<findMax(arr,10);
	
	return 0;
}