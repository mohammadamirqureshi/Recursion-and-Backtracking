#include<iostream>
using namespace std;

bool safeToPlace(int board[][10], int i, int j, int n){
	
	//check coloumn 
	for(int x=0;x<i;x++){
		if(board[x][j]==1) return false;
	}
	
	// check left diagonal
	int x=i, y=j;
	while(x>=0&&y>=0){
		if(board[x][y]==1) return false;
		
		x--; y--;
	}
	
	// check right diagonal
	x=i, y=j;
	while(x>=0&&y<n){
		if(board[x][y]==1) return false;
		
		x--; j++;
	}
	
	return true;
}


bool solveNQueen(int board[][10], int i, int n){
	
	// Base Case:
	if(i==n){
		// You have placed all th queens 
		for(int row=0;row<n;row++){
			for(int col=0;col<n;col++){
				if(board[row][col]==1)
				cout<<" Q";
				
				else 
				cout<<" _";
			}
			cout<<endl;
		}
		
		cout<<endl<<endl;
		
		// if we return false here then the program will serch for every possible placement
		return false;
	}
	
	//Recursion:
	for(int j=0;j<n;j++){
		if(safeToPlace(board,i,j,n)){
			// Place the queen- Assuming i,j position is right 
			board[i][j]=1;
			
			//check that next queen can be placed or not
			if(solveNQueen(board,i+1,n)){
				return true;
			}
			
			// If we reach here that means our assumption was wrong - i,j position is not right
			board[i][j]=0; // Backtracking 
		}
	}
	
	// tried every position in the current row but couldn't place the queen -- safeToPlace() gives false for every coloumn
	return false;
}


int main(){
	
	int n, board[10][10]={0};
	
	cout<<"Enter no. of rows: ";
	cin>>n;
	
	solveNQueen(board, 0, n);
	
	return 0; 
}
