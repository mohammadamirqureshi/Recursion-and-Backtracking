#include<iostream>
using namespace std;

int power(int a, int b){
	
	if(b==0)
	return 1;
	
	int smallAns = power(a,b/2);
	smallAns*=smallAns;
	
	if(b%2==0)
	return smallAns;
	
	else
	return a*smallAns; 
}

int main(){
	
	int a,b;
	cout<<"Enter a and b (a^b) : ";
	cin>>a>>b;
	
	cout<<" a^b = "<<power(a,b);
	
	return 0;
}
