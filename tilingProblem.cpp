#include<iostream>
using namespace std;

int findWays(int n){
	
	int x=0,y=0;
	if(n<=1)
	return 1;
	
	else if(n>=4)
	{
			x = x+ findWays(n-1);
			y= y+findWays(n-4);
			return x+y;
	}
		
		else
		{
			 x= x+findWays(n-1);
			return x;
		}

}

int main(){
	
	int n;
	
	cout<<"Enter the length of the wall : ";
	cin>>n;
	
	cout<<"The number of ways to arrange the tiles on the wall : "<<findWays(n);
	
	return 0;
}
