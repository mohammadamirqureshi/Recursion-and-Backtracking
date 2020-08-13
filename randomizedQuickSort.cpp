#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void shuffle(int arr[], int s, int e){
	
	srand(time(NULL));
	
	int i,j;
	
	for(i=e;i>0;i--){
		j=rand()%(i+1);  // creating a random number between 0 and i+1
		swap(arr[i],arr[j]);
	}
}

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
	
	// Sorted array
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	shuffle(arr,0,n-1);
	
	cout<<"Array after shuffle: ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"-";
	cout<<endl;
	
	quickSort(arr,0,n-1);
	
	cout<<"After sorting array: ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"-";
	
	
	
	return 0;
}
