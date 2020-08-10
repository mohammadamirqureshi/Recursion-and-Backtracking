#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
	
	int temp[100];
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	
	while(i<=mid && j<=e){
		if(arr[i]>arr[j])
		temp[k++]=arr[j++];
		
		else
		temp[k++]=arr[i++];
	}
	
	while(i<=mid){
		temp[k++]=arr[i++];
	}
	
	while(j<=e){
		temp[k++]=arr[j++];
	}
	
	for(int c=0;c<=e;c++)
	arr[c]=temp[c];
}

void mergeSort(int arr[], int s, int e){
	
	if(s>=e) return;
	
	// step 1.  Divide 
	int mid=(s+e)/2;
	
	// step 2.  Recursively sort arrays 
	mergeSort(arr,s,mid);
	mergeSort(arr,mid+1,e);
	
	// step 3.  Merge the two sorted arrays
	merge(arr,s,e);
}

int main(){
	
	int n,arr[n];
	
	cout<<"Enter the size of the array: ";
	cin>>n;
	
	cout<<"Enter the array: ";
	for (int i=0;i<n;i++)
	cin>>arr[i];
	
	mergeSort(arr,0,n-1);
	
	cout<<"After sorting array: ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"-";
	
	
	
	return 0;
}
