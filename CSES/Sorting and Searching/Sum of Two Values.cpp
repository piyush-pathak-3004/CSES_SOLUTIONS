#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	ll x;
	cin>>n;
	cin>>x;
	ll arr[n];
	ll brr[n];
	//map<ll,int>mp;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		brr[i] = arr[i];
		//mp[arr[i]] = i+1;
	}
	sort(arr,arr+n);
	int i=0;
	int j = n-1;
	ll a = -1;
	ll b = -1;
	while(i<j){
		if(arr[i] + arr[j] == x){
			a = arr[i];
			b = arr[j];
			break;
		}
		if(arr[i] + arr[j] > x){
			j--;
		}
		else{
			i++;
		}
	}
	if(a != -1 && b != -1){
		int idx_a = -1;
		int idx_b = -1;
		for(int i=0;i<n;i++){
			if(brr[i] == a && idx_a == -1){
				idx_a = i+1;
			}
			else if(brr[i] == b && idx_b == -1){
				idx_b = i+1;
			}
		}
		cout<<idx_a<<" "<<idx_b;
	}
	else{
		cout<<"IMPOSSIBLE";
	}
	
	return 0;
}
