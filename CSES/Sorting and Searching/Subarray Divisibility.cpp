#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
	
	int n;
	cin>>n;
	
	ll arr[n];
	map<ll,ll>mod;
	mod[0] = 1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll currSum = 0;
	for(int i=0;i<n;i++){
		currSum += arr[i];
		mod[((currSum%n) + n)%n]++;
	}
	
	ll ans = 0;
	for(auto it:mod){
		ans += (it.second*(it.second-1))/2;
	}
	cout<<ans;
	return 0;
}
