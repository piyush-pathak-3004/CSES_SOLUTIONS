#include<bits/stdc++.h>

using namespace std;

int dp[100+1][100000+1];

void isPossible(vector<int>arr,int n,int target){
    
    
    
    
    for(int i=0;i<=target;i++){
        dp[0][i] = 0;
    }
    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(j- arr[i-1]>=0 ){
                dp[i][j] = (dp[i-1][j] || dp[i-1][j-arr[i-1]]);    
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
}

int main(){
    
    int n;
    cin>>n;
    vector<int>arr(n,0);
    
    int m = 0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i] = a;
        m = max(a,m);
    }
    isPossible(arr,n,n*m);
    vector<int>ans;
    for(int i=1;i<=n*m;i++){
        
        if(dp[n][i]){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
    
}

