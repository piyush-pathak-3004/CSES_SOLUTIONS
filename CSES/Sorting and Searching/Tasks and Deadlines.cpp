#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool cmp(pair<ll,ll>a,pair<ll,ll>b){
	return (a.first < b.first);
}

int main(){
		
	int n;
	cin>>n;
	
	pair<ll,ll>arr[n];
	
	for(int i=0;i<n;i++){
		ll a,b;
		cin>>a>>b;
		arr[i].first = a;
		arr[i].second = b;
	} 
	sort(arr,arr+n,cmp);
	ll currTime = 0;
	ll ans = 0;
	for(int i=0;i<n;i++){
		currTime += arr[i].first; 
		ans += (arr[i].second - currTime);
	}
	cout<<ans;
	return 0;
}
