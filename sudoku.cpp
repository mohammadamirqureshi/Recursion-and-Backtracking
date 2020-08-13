#include<iostream>
#include<cmath>
using namespace std;

bool canPlace(int sudoku[][9],int i, int j, int n, int number){
	
	// Check row and col
	for(int x=0;x<n;x++){
		if(sudoku[x][j]==number||sudoku[i][x]==number)
		return false;
	}
	
	// Check sub grid
	int sn=sqrt(n);
	int sx= (i/sn)*sn;
	int sy= (j/sn)*sn;
	
	for(int row=sx;row<sx+sn;row++){
		for(int col=sy;col<sy+sn;col++){
			if(sudoku[row][col]==number)
			return false;
		}
		
	}
	
	return true;
	
}

bool solveSudoku(int sudoku[][9],int i, int j, int n){
	// Base case
	if(i==n){
		for(int row=0;row<n;row++){
			
			for(int col=0;col<n;col++){
			cout<<sudoku[row][col];
		    }
			
			cout<<endl;
		}
		
		return true;
	}
	
	if(j==n)
	solveSudoku(sudoku,i+1,0,n);
	
	if(sudoku[i][j]!=0)
	solveSudoku(sudoku,i,j+1,n);
	
	// Recursion
	
	for(int k=1;k<=9;k++){
		
		if(canPlace(sudoku,i,j,n,k)){
			sudoku[i][j]=k;
			
			if(solveSudoku(sudoku,i,j+1,n))
			return true;
		}
	}
	
	// Backtrack here
	sudoku[i][j]=0;
	
	return false;
}

int main(){
	
	int sudoku[9][9]={{5,3,0,0,7,0,0,0,0},{6,0,0,1,9,5,0,0,0},{0,9,8,0,0,0,0,6,0},{8,0,0,0,6,0,0,0,3},{4,0,0,8,0,3,0,0,1},{7,0,0,0,2,0,0,0,6},{0,6,0,0,0,0,2,8,0},{0,0,0,4,1,9,0,0,5},{0,0,0,0,8,0,0,7,9}};
	
	solveSudoku(sudoku,0,0,9);
	
	return 0;
}
