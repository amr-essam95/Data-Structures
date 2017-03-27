#include <iostream>
using namespace std;
const int h=1000;
//selection sort O(n^2)
void sort(int arr[],int size)
{
	int temp;
	int index_of_max;
	for (int i = 0; i < size-1; i++)
	{
		index_of_max=0;
		for (int j=0;j<size-i;j++)
		{
			if(arr[j]>arr[index_of_max])
				index_of_max=j;
		}
		temp=arr[size-i-1];
		arr[size-i-1]=arr[index_of_max];
		arr[index_of_max]=temp;

	}
}
void printArray(int arr[],int size)
{
	for (int i=0;i<size;i++)
		cout<<arr[i]<<endl;
}
int main()
{
	int arr[h];
	int x=h;
	for (int i=0;i<h;i++)
	{

		arr[i]=x;
		x--;
		// cout<<arr[i]<<endl;
	}
	printArray(arr,h);
	sort(arr,h);
	printArray(arr,h);


	return 0;
}