#include<iostream>
using namespace std;

bool solveMaze(char maze[][10], int sol[][10],  int i, int j, int m, int n){
	
	// Base case
	if(i==m && j==n){
		
		sol[i][j]=1;
		for(int row=0;row<=m;row++){
			for(int col=0;col<=n;col++){
				cout<<sol[row][col];
			}
			cout<<endl;
		}
		
		cout<<endl<<endl;
		return true;
	}
	
	
	// rat should be inside the grid
	
	if(i>m||j>n)
	return false;
	
	if(maze[i][j]=='X')
	return false;
	
	// Recursion
	
	sol[i][j]=1;
	
	bool successRight=solveMaze(maze,sol,i,j+1,m,n);
	bool successLeft=solveMaze(maze,sol,i+1,j,m,n);
	
	//Backtracking
	sol[i][j]=0;
	
	if(successRight||successLeft)
	return true;
	
	return false;
}

int main(){

    char maze[10][10]={
	"0000",
	"00X0",
	"000X",
	"0X00",
	};
	int sol[10][10]={0};
	
	
	solveMaze(maze,sol,0,0,3,3);
	return 0;
}
