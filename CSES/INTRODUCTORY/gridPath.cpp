#include<bits/stdc++.h>


using namespace std;

/*
??????R??????U??????????????????????????LD????D?


*/

long long cnt = 0;
//long long dp[7][7][48];

void validPath(int x,int y,int idx,string &s,vector<vector<int> >&grid){
	
	if(x == 6 && y == 0 && idx == 48){
		cnt++;
		return;
	}
	if(x == 6 && y == 0){
		return;
	}
	if(x<0 || x>=7 || y<0 || y>=7){
		return;
	}
	if(grid[x][y] == 1){
		return;
	}
	if(x-1>=0 && x+1<7 && y-1>=0 && y+1<7){
		if(grid[x-1][y] == 1 && grid[x+1][y] == 1 && grid[x][y+1] == 1 && grid[x][y-1] == 1){
			return;
		}
	}
	
	if(x == 0 && y-1>=0 && y+1<7 && grid[x+1][y] == 1 && grid[x][y-1] == 0 && grid[x][y+1] == 0 ){
		return;
	}
	if(x == 6 && y-1>=0 && y+1<7 && grid[x-1][y] == 1 && grid[x][y-1] == 0 && grid[x][y+1] == 0 ){
		return;
	}
	if(x-1>=0 && x+1 <7  && y-1>=0 && y+1<7 && grid[x-1][y] == 1 && grid[x+1][y] == 1 &&  grid[x][y-1] == 0 && grid[x][y+1] == 0 ){
		return;
	}
	if(y == 6 && x-1>=0 && x+1<7 && grid[x][y-1] == 1 && grid[x-1][y] == 0 && grid[x+1][y] == 0 ){
		return;
	}
	
	if(y-1>=0 && y+1 <7  && x-1>=0 && x+1<7 && grid[x][y-1] == 1 && grid[x][y+1] == 1 &&  grid[x-1][y] == 0 && grid[x+1][y] == 0 ){
		return;
	}
	/*if(dp[x][y][idx] != -1){
		cnt += dp[x][y][idx];
		return;
	}*/
	grid[x][y] = 1;
	
	if(s[idx] == '?'){
		
		validPath(x+1,y,idx+1,s,grid);
		validPath(x-1,y,idx+1,s,grid);
		validPath(x,y+1,idx+1,s,grid);
		validPath(x,y-1,idx+1,s,grid);
		
	}
	
	else{
		int x1 = x;
		int y1 = y;
		if(s[idx] == 'R'){
			y++;
		}
		if(s[idx] == 'L'){
			y--;
		}
		if(s[idx] == 'U'){
			x--;
		}
		if(s[idx] == 'D'){
			x++;
		}
		validPath(x,y,idx+1,s,grid);
		x = x1;
		y = y1;
	}
	//dp[x][y][idx] = cnt;
	grid[x][y] = 0;
	
}

int main(){
	
	string s;
	cin>>s;
	/*for(int i = 0;i<7;i++){
		for(int j=0;j<7;j++){
			for(int k = 0;k<48;k++){
				dp[i][j][k] = -1;
			}
		}
	}*/
	vector<vector<int> >grid(7,vector<int>(7,0));
	
	validPath(0,0,0,s,grid);
	cout<<cnt;	
	return 0;
}

