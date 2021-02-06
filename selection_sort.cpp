#include<iostream>
using namespace std;
int main()
{
	int i,j,pos,min,size,temp,flag=0;
	cout<<"enter the size of the array\n";
	cin>>size;
	int a[size];
	cout<<"enter array elements\n";
	for(i=0;i<size;i++)
		cin>>a[i];

for(i=0;i<size-1;i++)
{
	min=a[i];
	pos=i;
	for(j=i+1;j<size;j++)
	{

		if(min>a[j])
		{
			min=a[j];
			pos=j;
			flag++;
		}

	}
	
	if(flag!=0)
		{
		temp=a[i];
		a[i]=min;
		a[pos]=temp;
		}
}

cout<<"sorted array is \n";
for(i=0;i<size;i++)
cout<<a[i]<<" ";

cout<<endl;
return 0;	

}