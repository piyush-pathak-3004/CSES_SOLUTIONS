#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	ll arr[n];
	ll ans = INT_MIN;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		ans = max(ans,arr[i]);
	}
	//sort(arr,arr+n);
	
	ll temp = 0;
	for(int i=0;i<n;i++){
		temp += arr[i];
		ans = max(ans,temp);
		if(temp<0){
			temp = 0;
		}
	}
	cout<<ans;
	return 0;
}
