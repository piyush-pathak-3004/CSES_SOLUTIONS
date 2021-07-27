#include<bits/stdc++.h>

using namespace std;
#define ll long long

int mod =  1000000007;
int solve(int n,int target){
    
    ll dp[n+1][target+1];
    
    for(int i=0;i<n+1;i++){
        dp[i][0] = 0;    
    }
    for(int i=0;i<target+1;i++){
        dp[0][i] = 0;    
    }
    
    dp[0][0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(j-i<0){
                dp[i][j] = dp[i-1][j];    
            }
            else{
                dp[i][j] = (dp[i-1][j]+dp[i-1][j-i]);
                dp[i][j] = dp[i][j]%mod;
            }
        }
    }
    
    return dp[n][target];
}


int main(){
    
    int n;
    cin>>n;
    int sum = (n*(n+1))/2;
    
    if(sum%2 != 0){
        cout<<0;    
    }
    else{
        ll ans = solve(n,sum/2);
        cout<<ans;    
    }
    
    
    
    return 0;
    
}

