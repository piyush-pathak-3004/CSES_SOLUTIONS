#include<bits/stdc++.h>

using namespace std;

#define ll long long
int dp[1000002][102];
int mod  = 1000000007;


int solve(int n,int x,int arr[]){
    
    if(x == 0){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    
    if(dp[x][n] != -1){
        return dp[x][n];
    }
    
    if(arr[n-1]<= x){
        return dp[x][n] = (solve(n,x-arr[n-1],arr) + solve(n-1,x,arr))%mod;
    }
    return dp[x][n] =  solve(n-1,x,arr);
    
}

int main(){
    
    int n,c;
    cin>>n>>c;
    
    int arr[n];
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = solve(n,c,arr);
    cout<<ans;
    
    return 0;
}
