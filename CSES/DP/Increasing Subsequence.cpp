#include<bits/stdc++.h>

using namespace std;
#define ll long long

int mod =  1000000007;
/*
dp[i]<- max length of increasing sequnce which ends at i

*/
int solve(int arr[],int n){
    /*
    
    // TC->O(n^2)
    int dp[n];
    
    dp[0] = 1;
    
    int ans = 1;
    for(int i=1;i<n;i++){
        int temp = 0;
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
                temp = max(temp,dp[j]);    
            }
        }
        dp[i] = 1+temp;
        
        ans = max(ans,dp[i]);
    }
    return ans;
    
    */
    
    // TC->O(nlogn)
    vector<int>dp;
    for(int i=0;i<n;i++){
        auto it = lower_bound(dp.begin(),dp.end(),arr[i]);
        
        if(it == dp.end()){
            dp.push_back(arr[i]);
        }else{
            *it = arr[i];
        }
    }
    return dp.size();
}


int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans = solve(arr,n);
    cout<<ans;
    
    return 0;
    
}

