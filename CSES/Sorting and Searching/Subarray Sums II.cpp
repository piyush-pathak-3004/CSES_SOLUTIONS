#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
	
	int n;
	ll x;
	cin>>n>>x;
	
	ll arr[n];
	map<ll,int>mp;
	ll ans = 0;
	mp[0] = 1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll currSum = 0;
	for(int i=0;i<n;i++){
		
		currSum += arr[i];
		if(mp.find(currSum-x) != mp.end()){
			ans += mp[currSum-x];
		}
		mp[currSum]++;
	}

	cout<<ans;
	
	
	return 0;
}
