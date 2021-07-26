#include<bits/stdc++.h>

using namespace std;

/*
197978305
98989152
time = 2.6s

197973454
98989152

*/



int mod = 1000000007;
int dp[1000001];


int cnt = 0;
int cnt1 = 0;
int solve(int x,vector<int> &arr){
    
    cnt++;
    if(x<0){
    	return INT_MAX;
	}
	if(x == 0){
		return 0;
	}
	
    
    if(dp[x] != -1){
    	return dp[x];
	}
	cnt1++;
	
	int ans1 = INT_MAX;
	
	for(int c:arr){
	    int temp = solve(x-c,arr);
	    
	    if(temp != INT_MAX && temp<ans1){
	        ans1 = temp+1;
	    }
	}
	dp[x] = ans1;
	return dp[x];
	
}
int main(){
	
	
	int n,x;
	cin>>n>>x;
	
	vector<int> arr(n);
	
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	
	memset(dp,-1,sizeof(dp));
	int ans = solve(x,arr);
	if(ans == INT_MAX){
	    ans = -1;
	}
	cout<<ans;
	return 0;
}
