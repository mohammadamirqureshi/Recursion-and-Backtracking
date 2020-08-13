#include<iostream>
using namespace std;

void subsequences(char* in, char* out, int i, int j){
	
	// Base case 
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out;
		
		cout<<", ";
		return;
	}
	
	// Recursion 
	
	// 1. Include the current char
	out[j]=in[i];
	subsequences(in, out, i+1, j+1);
	
	// 2. Exclude the current char
	subsequences(in, out, i+1, j);
}

int main(){
	
	char in[100], out[100];
	cout<<"Enter the string: ";
	cin>>in;
	
	cout<<"The subsequences are: ";
	subsequences(in, out, 0, 0);
	
	return 0;
}
