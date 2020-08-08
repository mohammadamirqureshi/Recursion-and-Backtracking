#include<iostream>
using namespace std;


void bubbleSort(int arr[],int j, int n){
	
	if(n==1)
	return;
	
	else if(j==n-1)
	return bubbleSort(arr,0,n-1);
	
	else if(arr[j]>arr[j+1])
	{
		swap(arr[j],arr[j+1]);
	}
	
	bubbleSort(arr,j+1,n);

	
}


int main(){
	
	int n,arr[n];
	
	cout<<"Enter the size of the array : ";
	cin>>n;
	cout<<"Enter the array : ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	bubbleSort(arr,0,n);
	
	cout<<"Array after sorting : ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"-";
	
	return 0;
}
