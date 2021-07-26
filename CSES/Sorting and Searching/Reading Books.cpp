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
		
	int n;
	cin>>n;
	
	ll arr[n];
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		arr[i] = a;
		
	} 
	sort(arr,arr+n);
	ll ans;
	ll sum = 0;
	for(int i=0;i<n-1;i++){
		sum += arr[i];
	}
	if(sum< arr[n-1]){
		ans = 2*arr[n-1];
	}
	else{
		ans = sum+arr[n-1];
	}
	cout<<ans;
	return 0;
}
