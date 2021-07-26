#include<bits/stdc++.h>

using namespace std;
int cnt = 0;

bool isValid(int x,int y,vector<vector<char> >&board){
	
	
	if(x<0 || x>=8 || y<0 || y>=8 || board[x][y] == '*'){
		return false;
	}
	
	for(int i=0;i<8;i++){
		
		if(board[x][i] == 'Q'){
			return false;
		}
	}
	
	for(int i=0;i<8;i++){
		
		if(board[i][y] == 'Q'){
			return false;
		}
	}
	
	// code for diagonals
	int row = x;
	int col = y;
	
	while(row>=0 && col >=0 ){
		
		if(board[row][col] == 'Q'){
			return false;
		}
		row--;
		col--;
	}
	
	
	// code for anti diagonals
	
	
	while(x>=0 && y<8){
		
		if(board[x][y] == 'Q'){
			return false;
		}
		
		x--;
		y++;
	}
	
	return true;
	
}

void helper(int x,vector<vector<char> >&board){
	
	
	if(x == 8){
	    //cout<<"hi"<<endl;
		cnt++;
		return;
	}	
	for(int i=0;i<8;i++){
		if(isValid(x,i,board)){
			board[x][i] = 'Q';
			helper(x+1,board);
			board[x][i] = '.';
		}	
	}
	
	
}

void placeQueen(vector<vector<char> >&board){
	
	
	helper(0,board);
	
}

int main(){
	
	vector<vector<char> >board(8,vector<char>(8));
	
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>board[i][j];
		}
	}
	/*for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}*/
	placeQueen(board);
	
	cout<<cnt;
	
	return 0;
} 
