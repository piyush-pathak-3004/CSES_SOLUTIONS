#include<bits/stdc++.h>

using namespace std;

#define ll long long

int mod  = 1000000007;
//int dp[100001];
int  prices[1001];
int pages[1001];
int solve(int n,int x){
    
    int dp[n+1][x+1];
    
     memset(dp,-1,sizeof(dp));
     
     for(int i=0;i<=n;i++){
         for(int j= 0;j<=n;j++){
             if(i == 0 || j == 0){
                 dp[i][j] = 0;
             }
         }
     }
    
     for(int i=1;i<=n;i++){
         for(int j= 1;j<=x;j++){
             if(prices[i-1] > j){
                 dp[i][j] = dp[i-1][j];
             }
             else{
                 dp[i][j] = max(pages[i-1] + dp[i-1][j-prices[i-1]], dp[i-1][j]);
             }
         }
     }
     return dp[n][x];
 
}

int main(){
    
    int n,x;
    
    cin>>n>>x;

    for(int i=0;i<n;i++){
        
        cin>>prices[i];    
    }
    
    for(int i=0;i<n;i++){
        
        cin>>pages[i];    
    }
    int ans = solve(n,x);
    
    cout<<ans;
    
    return 0;
}
