#include <iostream>
#include <stdlib.h>
using namespace std;

void sort(int arr[],int n)
{
	bool end;
	for(int i=0;i<n;i++)
	{
		end=true;
		for(int j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				end=false;
			}
		}
		if(end==true)
			return ;
	}
}

int main()
{
	int arr[200];
	int x ;
	for(int i=0;i<200;i++)
	{
		x=rand()%10000;
		arr[i]=x;
	}
	for (int i=0;i<200;i++)
	{
		cout<<arr[i]<<endl;
	}
	sort(arr,200);
	cout<<endl<<endl<<endl;
	for (int i=0;i<200;i++)
	{
		cout<<arr[i]<<endl;
	}

	
	return 0;
}