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
		
	int n,s;
	cin>>n>>s;
	pair<ll,int>arr[n];
	
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		arr[i].first = a;
		arr[i].second = i+1;
	} 
	sort(arr,arr+n);
	
	ll sum = 0;
	ll ans[3];
	int flag = 1;
	for(int i=0;i<n;i++){
		ll target = s-arr[i].first;
		int low = i+1;
		int hi = n-1;
		while(low < hi){
			if(arr[low].first + arr[hi].first == target){
				ans[0] = arr[i].second;
				ans[1] = arr[low].second;
				ans[2] = arr[hi].second;
				flag = 0;
				break;	
			}
			
			if(arr[low].first + arr[hi].first < target){
				low++;
			}
			else{
				hi--;
			}
		} 
		if(flag == 0){
			break;
		}
	}
	if(flag == 0){
		cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2];
	}
	else{
		cout<<"IMPOSSIBLE";
	}

	return 0;
}
