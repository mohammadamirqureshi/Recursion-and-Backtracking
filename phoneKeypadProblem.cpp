#include<iostream>
using namespace std;

char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void possibleNames(char in[], char out[], int i){
  
  // Base Case: 
  if(in[i]=='\0'){
  	out[i]='\0';
  	cout<<out<<", ";
  	return;
  }	
  
  // Recursion:
  int digit = in[i]-'0';
  for(int j=0;keypad[digit][j]!='\0';j++){
  	out[i]=keypad[digit][j];
  	possibleNames(in, out, i+1);
  }
	
}

int main(){
	
	char in[100], out[100];
	
	cout<<"Enter input: ";
	cin>>in;
	
	possibleNames(in, out, 0);
	
	return 0;
}




//------------------------------------------------------------- This also works but has longer code------------------------------------------------------------------------------------

//void possibleNames(int arr[], char out[], int i, int n){
//	
//	// Base case:
//	if(i==n) {
//		cout<<out<<", ";
//		return;
//	}
//	
//	// Recursion 
//	if(arr[i]==2){
//		out[i]='A';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='B';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='C';
//		possibleNames(arr, out, i+1, n);
//		
//	}
//	
//	else if(arr[i]==3){
//		out[i]='D';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='E';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='F';
//		possibleNames(arr, out, i+1, n);
//	}
//	
//	else if(arr[i]==4){
//		out[i]='G';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='H';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='I';
//		possibleNames(arr, out, i+1, n);
//	}
//	
//	else if(arr[i]==5){
//		out[i]='J';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='K';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='L';
//		possibleNames(arr, out, i+1, n);
//	}
//	
//	else if(arr[i]==6){
//		out[i]='M';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='N';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='O';
//		possibleNames(arr, out, i+1, n);
//	}
//	
//	else if(arr[i]==7){
//		out[i]='P';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='Q';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='R';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='S';
//		possibleNames(arr, out, i+1, n);
//	}
//	
//	else if(arr[i]==8){
//		out[i]='T';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='U';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='V';
//		possibleNames(arr, out, i+1, n);
//	}
//	
//	else if(arr[i]==9){
//		out[i]='W';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='X';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='Y';
//		possibleNames(arr, out, i+1, n);
//		
//		out[i]='Z';
//		possibleNames(arr, out, i+1, n);
//	}
//	
//}
//
//
//int main(){
//	
//	int n, arr[n]; char out[n];
//	
//	cout<<"Enter the size of the integer array: ";
//	cin>>n;
//	
//	cout<<"Enter the array: ";
//	for(int i=0;i<n;i++)
//	cin>>arr[i];
//	
//	possibleNames(arr, out, 0, n);
//	
//
//	return 0;
//}
