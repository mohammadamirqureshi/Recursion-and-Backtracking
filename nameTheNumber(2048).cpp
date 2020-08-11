#include<iostream>
using namespace std;

char spell[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void nameIt(int n){
	
	if(n==0)
	return;
	
	nameIt(n/10);
	cout<<spell[n%10]<<" ";
	
}

int main(){
	
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	nameIt(n);
	
	return 0;
}
