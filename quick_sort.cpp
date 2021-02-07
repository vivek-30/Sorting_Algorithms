#include<iostream>
using namespace std;

int partion(int *a,int start,int end)
{
	int pivot=a[end];
	int pindex=start,i=start,temp;
	for(i=start;i<end;i++)
	{
		if(a[i]<pivot)
		{
			temp=a[i];
			a[i]=a[pindex];
			a[pindex]=temp;
			pindex++;
		}
	}

			temp=a[i];
			a[i]=a[pindex];
			a[pindex]=temp;
			

			return pindex;

}

void qsort(int *a,int start,int end)
{
	int pindex;
	if(start<end)
	{
		pindex=partion(a,start,end);
		qsort(a,start,pindex-1);
		qsort(a,pindex+1,end);

	}
}

// driver code
int main()
{
	int size,start=0;
	cout<<"enter the size of the array"<<endl;
	cin>>size;
	int a[size];
	int end=size-1;
	cout<<"enter the array elements\n";
	while(start<=end)
	{
		cin>>a[start];
		start++;
	}
	
	qsort(a,0,end);
	start=0;
	cout<<"sorted array is\n";
	while(start<=end)
	{
		cout<<a[start++]<<" ";
	}

	cout<<endl;
	return 0;
}