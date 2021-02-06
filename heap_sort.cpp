#include<iostream>
using namespace std;
#define left 2*root+1 
#define right 2*root+2

void swap(int& a,int& b)
{
	int temp=a;
	a=b;
	b=temp;
}

void buildMaxHeap(int heap[],int root,int size)
{
	// while(left<=size)
	// {
	// 	// swaps bigger child of root with root.
	// 	if(right>size){
	// 		if(heap[left]>heap[root]){
	// 		swap(heap[left],heap[root]);
	// 		root=left;
	// 		}
	// 		else break;
	// 	}
	// 	else{
	// 		if(heap[left]>heap[right] and heap[left]>heap[root]){
	// 			swap(heap[left],heap[root]);
	// 			root=left;
	// 		}
	// 		else{
	// 			if(heap[right]>heap[left] and heap[right]>heap[root]){
	// 				swap(heap[right],heap[root]);	
	// 				root=right;	
	// 			}
	// 			}
	// 		}
	// }

	int largest=root;
	if(left<=size and heap[left]>heap[largest])
		largest=left;
	if(right<=size and heap[right]>heap[largest])
		largest=right;

	if(largest!=root){
		swap(heap[root],heap[largest]);
		buildMaxHeap(heap,largest,size);
	}

}

void heapsort(int heap[],int size){

	// build max heap.
	for(int i=(size/2)-1;i>=0;i--)
		buildMaxHeap(heap,i,size);
// swap last and first element of heap and reduce heap size by 1.
	while(size>0){
		swap(heap[0],heap[size]);
		size--;
		buildMaxHeap(heap,0,size);
	}
}

int main()
{
	int size,data;
	cout<<"enter total size of array\n";
	cin>>size;
	int *heap= new int[size];
	cout<<"enter "<<size<<" elements\n";
	for(int i=0;i<size;i++)
		cin>>heap[i];
	size--;
	heapsort(heap,size);
	cout<<"sorted array is :\n";
	for(int i=0;i<=size;i++)
		cout<<heap[i]<<" ";
	delete [] heap;
	heap=NULL;
	cout<<endl;
	return 0;
}