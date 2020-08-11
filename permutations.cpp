#include<iostream>
using namespace std;

void findPermutations(char in[], int i){
	
	if(in[i]=='\0'){
		cout<<in<<", ";
		return;
	}
	
	for(int j=i;in[j]!='\0';j++){
		swap(in[i],in[j]);
		findPermutations(in, i+1);
		
		// Backtreacking - to restore the original array
		swap(in[i],in[j]);
	}
}

int main(){
	
	char in[100];
	
	cout<<"Enter the string: ";
	cin>>in;
	
	findPermutations(in, 0);
	
	return 0;
}
