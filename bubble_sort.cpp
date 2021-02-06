#include<iostream>
using namespace std;
int main()
{
	int size,temp,min,i,j;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	int a[size];
	cout<<"enter array elements \n";
	for(i=0;i<size;i++)
		cin>>a[i];
	// sorting array elements .

	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
		if(a[j+1]<a[j])
		{
			temp=a[j+1];
			a[j+1]=a[j];
			a[j]=temp;
		}
	}

	}

	cout<<"sorted array is \n";
	for(i=0;i<size;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;

}