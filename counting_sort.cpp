
#include<iostream>
using namespace std;

void count_sort(int arr[],int size,int range)
{

int temp_arr[size],range_arr[range];

for(int i=0;i<range;i++)
range_arr[i]=0;

// increase every occurence of array element in range array by 1.
for(int i=0;i<size;i++)
	range_arr[arr[i]]++;

// calculate cumulative frequency for range array.
for(int i=1;i<range;i++)
	range_arr[i]+=range_arr[i-1];

for(int i=size-1;i>=0;i--){

	temp_arr[range_arr[arr[i]]-1]=arr[i];
	range_arr[arr[i]]--;
}

// copy all element from temp array into orignal array.
for(int i=0;i<size;i++)
	arr[i]=temp_arr[i];

}

int main()
{
	int size,i=0;
	cout<<"enter the size of the array"<<endl;
	cin>>size;
	int arr[size];

	cout<<"enter the array elements\n";
	while(i<size)
		cin>>arr[i++];

	int range=arr[0];

	for(int i=1;i<size;i++)
		if(arr[i]>range)
			range=arr[i];

		count_sort(arr,size,range+1);
		i=0;

	cout<<"sorted array is\n";
	while(i<size)
		cout<<arr[i++]<<" ";
	cout<<endl;

	return 0;
}