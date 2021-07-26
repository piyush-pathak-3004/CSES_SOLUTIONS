#include<bits/stdc++.h>

using namespace std;
#define ll long long
bool isPossible(ll arr[],ll time,int t,int n){
	
	ll products = 0;
	
	for(int i=0;i<n;i++){
		products += time/arr[i];
	}
	if(products < t){
		return false;
	}
	return true;
}

int main(){
		
	int n,t;
	cin>>n>>t;
	
	ll arr[n];
	ll mine = INT_MAX;
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		arr[i] = a;
		mine = min(mine,arr[i]);
	} 
	ll a = 0;
	ll b = mine*t;
	ll ans = 0;
	while(a<=b){
		
		ll mid = a+ (b-a)/2;
		
		if(isPossible(arr,mid,t,n)){
			ans = mid;
			b = mid-1;
		}
		else{
			a = mid+1;
		}
	}
	cout<<ans;
	return 0;
}
