#include<iostream>
using namespace std;

void merge(int *a,int start ,int mid,int end)
{
	int i=start,j=mid+1,size=end-start+1;
	int arr[size],k=0;

	while(i<=mid&&j<=end)
	{
		if(a[i]<=a[j])
		{
			arr[k]=a[i];
			k++;i++;
		}
		else
		{
			arr[k]=a[j];
			k++;j++;
		}
	}

	if(i>mid)
		while(j<=end)
		{
		arr[k]=a[j];
		k++;j++;
		}
	else{
		while(i<=mid)
			{ 
				arr[k]=a[i];
				k++;i++;
			}
		}
			for(i=0;i<size;i++)
				a[start++]=arr[i];
	
}

void msort(int *a,int start,int end)
{
	int mid=(start+end)/2;
	if(start<end)
	{
		msort(a,start,mid);
		msort(a,mid+1,end);
		merge(a,start ,mid,end);
	}
}

int main()
{
	int size,start,end;
	cout<<"enter the size of array \n";
	cin>>size;
	int arr[size];
	start=0;
	end=size-1;
	cout<<"enter the array elements\n";
	for(int i=0;i<size;i++)
		cin>>arr[i];

	msort(arr,start,end);
	
	cout<<"sorted elements are :\n";
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;

	return 0;
}