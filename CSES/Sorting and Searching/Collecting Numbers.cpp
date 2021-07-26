#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    ll arr[n];
    map<ll,int>mp;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    	mp[arr[i]] = i+1;
	}
    ll ans = 1;
    for(int i=1;i<n;i++){
    	if(mp[i] > mp[i+1]){
    		ans++;
		}
	}
	cout<<ans;
	return 0;
}
