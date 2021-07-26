#include<bits/stdc++.h>

using namespace std;
//int dp[5001][5001];
int solve(string s1,string s2){
	int n = s1.size();
	int m = s2.size();
	int dp[n+1][m+1];
	
	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			if(i == 0){
				dp[i][j] = j;
			}
			if(j == 0){
				dp[i][j] = i;
			}
		}
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			if(s1[i-1] == s2[j-1	]){
				dp[i][j] = dp[i-1][j-1];
			}
			else{
				dp[i][j] = 1+ min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
			}
		}
	}
	
	/*for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	
	return dp[n][m];
}


int main(){
	
	string s1,s2;
	cin>>s1>>s2;
	//memset(dp,-1,sizeof(dp);
	int ans = solve(s1,s2);
	cout<<ans;
	return 0;
}
