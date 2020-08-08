#include<iostream>
using namespace std;

bool checkSorted(int arr[], int i,int n){
	
	if(i==n-1) return true;
	
	if(arr[i]<=arr[i+1] && checkSorted(arr,i+1,n))
	return true;
	
	else
	return false;
	
}

int main(){
	
	int n,arr[n];
	
	cout<<"Enter array size : ";
	cin>>n;
	cout<<"Enter the array : ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	if(checkSorted(arr,0,n))
	cout<<"The array is sorted";
	
	else cout<<"The array is not sorted";
	
	
	
	return 0;
}
