#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
	
	int i=s-1;
	int j=s;
	int pivot=arr[e];
	for(;j<e;j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	
	swap(arr[i+1],arr[e]);
	return i+1;
}

void quickSort(int arr[], int s, int e){
	
	if(s>=e) return;
	
	int p = partition(arr,s,e);
	quickSort(arr,s,p-1);
	quickSort(arr,p+1,e);
}

int main(){
	
	int n,arr[n];
	
	cout<<"Enter the size of the array: ";
	cin>>n;
	
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	quickSort(arr,0,n-1);
	
	cout<<"After sorting array: ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"-";
	
	
	
	return 0;
}
