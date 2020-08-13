#include<iostream>
using namespace std;

int *apply_all(int arr1[], int arr2[],int m, int n){
	
	int *arrNew = new int[m*n];
	
	for(int i=0;i<n;i++){
		arrNew[i]=arr1[i]*arr2[i];
	}
	
	 return arrNew;
}


int main(){
	
	int arr1[5]={1,2,3,4,5},arr2[3]={10,20,30};
	
	int *ptr = apply_all(arr1,arr2,5,3);
	
	for(int i=0;i<3;i++)
	cout<<ptr[i]<<"-";
	
	return 0;
}
