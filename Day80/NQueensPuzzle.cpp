// Question Link-->https://www.codingninjas.com/studio/problems/the-n-queens-puzzle_981286

#include <bits/stdc++.h> 

void adding(vector<vector<int> > &ans,vector<vector<int> > &board,int n)
{
	vector<int> temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			temp.push_back(board[i][j]);
		}
	}
	ans.push_back(temp);
}

bool isSafe(int row,int col,vector<vector<int> > &board,int n ){
	int x = row;
	int y = col;
	// chech for same row
	while(y>=0){
		if(board[x][y] ==1 )
			return false;
		y--;
	}


	 x = row;
	 y = col;
	// chech for upper left diagonal
	while(y>=0 && x>=0){
		if(board[x][y] ==1 )
			return false;
		y--;
		x--;
	}

	 x = row;
	 y = col;
	// chech for lower left diagonal
	while(x<n && y>=0){
		if(board[x][y] ==1 )
			return false;
		y--;
		x++;
	}

	return true;
}
void solve(int col,vector<vector<int> > &ans,vector<vector<int> > &board,int n){

	// all columns are filled
	if( col == n)
	{
		adding(ans,board,n);
		return;
	}

	for(int row=0;row<n;row++){
		if(isSafe(row,col,board,n)){
			// if placing queen is safe
			board[row][col] = 1;
			solve(col+1,ans,board,n);
			// backtracking
			board[row][col] = 0;
		}
	}
}

vector<vector<int>> nQueens(int n)
{
	vector<vector<int> > board(n,vector<int>(n,0));
	vector<vector<int> > ans;

	solve(0,ans,board,n);

	return ans;
	
}
