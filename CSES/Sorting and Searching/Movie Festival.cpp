#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	
	vector<pair<ll,ll> > arr;
	
	for(int i=0;i<n;i++){
		ll a,b;
		cin>>a>>b;
		arr.push_back({b,a});
	}
	sort(arr.begin(),arr.end());
	ll end = arr[0].first;
	int ans = 1;
	//int temp = 1;
	for(int i=1;i<n;i++){
		if(arr[i].second >= end){
			ans++;
			end = arr[i].first;
		}
	}
	cout<<ans;
	return 0;
}
