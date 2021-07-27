#include<bits/stdc++.h>

using namespace std;
#define ll long long


vector<int>arr;
int n;

ll solve(int i,int j){
    ll dp[n][n];
    //memset(dp,0,sizeof(dp));
    for(int g = 0;g<n;g++){
        for(int i=0,j=g;j<n;i++,j++){
            if(g == 0){
                dp[i][j] = arr[i];
            }
            else if(g == 1){
                dp[i][j] = max(arr[i],arr[j]);
            }
            else{
                dp[i][j] =  max(arr[i]+ min(dp[i+2][j] , dp[i+1][j-1]) , arr[j]+ min(dp[i+1][j-1],dp[i][j-2]));
            }
           
        }
    }
   
   	return dp[0][n-1];

}


int main(){
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    //ll ans1 = recursive(0,n-1,true);
    ll ans = solve(0,n-1);
    
    cout<<ans;
    
    return 0;
    
}

