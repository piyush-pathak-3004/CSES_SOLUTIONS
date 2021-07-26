#include<bits/stdc++.h>

using namespace std;

#define ll long long

int mod  = 1000000007;
int dp[1001][1001];
char arr[1001][1001];
int solve(int i,int j,int n){
    if(arr[i][j] == '*'){
        return 0;
    }
    if(i == n-1 && j == n-1){
        return 1;
    }
    
    
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int ans1 = 0,ans2 = 0;
    if(i+1<n &&  arr[i+1][j] != '*' ){
        ans1 = solve(i+1,j,n);
    }
    if(j+1<n && arr[i][j+1] != '*' ){
        ans2 = solve(i,j+1,n);
    }
    
    dp[i][j] = (ans1 + ans2)%mod;
    return dp[i][j];
 
}

int main(){
    
    int n;
    
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];    
        }
        
    }
    memset(dp,-1,sizeof(dp));
    int ans = solve(0,0,n);
    
    cout<<ans;
    
    return 0;
}
