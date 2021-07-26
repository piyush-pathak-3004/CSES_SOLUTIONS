#include<bits/stdc++.h>

#define ll long long
using namespace std;
bool isPossible(ll target,ll arr[],int n,int k){
	ll currSum = 0;
	int cnt = 0;
	for(int i=0;i<n;i++){
		
		if(arr[i] > target){
			return false;
		}
		
		currSum += arr[i];
		
		if(currSum > target){
			cnt++;
			currSum = arr[i];
		}
	}
	cnt++;
	if(cnt <= k){
		return true;
	}
	return false;
		
}
int main(){
	
	int n,k;
	cin>>n>>k;
	ll arr[n];
	ll sum = 0;
	ll start = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum += arr[i];
		start = max(arr[i],start);
	}
	//int target = sum/k;
	ll ans = 0;
	ll end = sum;
	while(start<=end){
		
		ll mid = start + (end-start)/2;
		
		if(isPossible(mid,arr,n,k)){
			ans = mid;
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	
	cout<<ans;
	
	return 0;	
}
