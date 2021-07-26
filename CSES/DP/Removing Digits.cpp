#include<bits/stdc++.h>

using namespace std;

#define ll long long

int mod  = 1000000007;


int solve(int n){
    
    if(n == 0){
        return 0;
    }
   
   
    int m = n;
    int d = 0;
    while(m){
       int t = m%10;
       
       d = max(d,t);
       m = m/10;
    }
    return 1+solve(n-d);
 
}

int main(){
    
    int n;
    
    cin>>n;
    
    int ans = solve(n);
    
    cout<<ans;
    
    return 0;
}
