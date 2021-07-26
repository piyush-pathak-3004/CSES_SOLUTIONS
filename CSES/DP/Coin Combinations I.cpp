#include<bits/stdc++.h>

using namespace std;

#define ll long long
ll dp[1000001];
int mod  = 1000000007;
// dp[i]-> number of ways to make sum i form given arr


//dp[i]-> arr[j] ->   dp[i] += dp[i-arr[j]]

ll solve(int n,int x,int arr[]){
    
    if(x == 0){
        return 1;
    }
    
    if(dp[x] != -1){
    	return dp[x];
	}
    ll noOfways = 0;
    
    
    for(int i=0;i<n;i++){
        if(arr[i]<=x){
            noOfways +=   (solve(n,x-arr[i],arr));
        }
    }
    
    dp[x] = noOfways%mod;
    return dp[x];
    
}

int main(){
    
    int n,c;
    cin>>n>>c;
    
    int arr[n];
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    ll ans = solve(n,c,arr);
    cout<<ans;
    
    return 0;
}
