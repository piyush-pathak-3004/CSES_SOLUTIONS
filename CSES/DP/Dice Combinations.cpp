#include<bits/stdc++.h>

using namespace std;


int mod = 1000000007;
long long dp[1000001];
long long solve(int n){
	if(n == 0){
	    return 1;
	}
	if(n<0){
		return 0;
	}
	if(n == 1 || n == 2){
		return dp[n] =  n;
	}
	if(dp[n] != -1){
		return dp[n];
	}
	return dp[n] =  (solve(n-6)%mod + solve(n-5)%mod + solve(n-4)%mod + solve(n-3)%mod + solve(n-2)%mod + solve(n-1)%mod)%mod;
}
int main(){
	
	
	int n;
	cin>>n;
	memset(dp,-1,sizeof(dp));
	long long ans = solve(n);
	
	cout<<ans;
	return 0;
}
