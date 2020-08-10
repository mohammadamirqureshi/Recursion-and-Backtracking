#include<iostream>
using namespace std;

int linearSearch(int arr[], int x,int n,int i){
	
	if(i==n)
	return -1;
	
	if(arr[i]==x)
	return i;
	
	else 
	return linearSearch(arr,x,n,i+1);
}

int main(){
	
	int n,arr[n],x;
	
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	cout<<"Enter the array elements : ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<"Enter the element to be searched for : ";
	cin>>x;
	
	cout<<"The element found at index : "<<linearSearch(arr,x,n,0);
	
	return 0;
}
