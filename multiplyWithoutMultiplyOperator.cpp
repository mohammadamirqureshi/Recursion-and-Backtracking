#include<iostream>
using namespace std;

int multiply(int x, int y){
	
	if(y==0||x==0)
	return 0;
	
	if(y>0&&x>0)
	return x+multiply(x,y-1);
	
	else if(y<0&&x<0)
	return multiply(-x,-y);
	
	else if(y<0)
	return -multiply(x,-y);
	
	else 
	return -multiply(-x,y);
	
}

int main(){
	
	int x,y;
	
	cout<<"Enter the number : ";
	cin>>x>>y;
	cout<<"x = "<<x<<" and y = "<<y<<endl;
	cout<<"x*y = "<<multiply(x,y);
	
	return 0;
}
