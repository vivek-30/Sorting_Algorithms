#include<iostream>
using namespace std;

int main()
{
	int temarr,j,size,k;
	cout<<"enter the size of array\n";
	cin>>size;
	int* arr=new int[size];

	cout<<"enter array elements\n";								
	for(int i=0;i<size;i++)
		cin>>arr[i];

	for(int i=1;i<size;i++)
	{
		j=i-1;
		k=i;
		while(j>=0 and k>=0)
		{
			if(arr[j]>arr[k])
			{
				int temarr=arr[k];
				arr[k]=arr[j];
				arr[j]=temarr;
			}
			j--;
			k--;
		}
	}
	cout<<"sorted array is \n";

	for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	delete[] arr;

	return 0;
}