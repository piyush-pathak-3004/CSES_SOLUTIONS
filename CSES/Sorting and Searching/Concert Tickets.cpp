#include<bits/stdc++.h>

using namespace std;
#define ll long long

int lower_bound(ll price,vector<ll> &arr){
	
	int i = 0;
	int j = arr.size()-1;
	int ans = -1;
	while(i<=j){
		int mid = i + (j-i)/2;
		if(arr[mid] <= price){
			ans = mid;
			i = mid+1;
		}
		else{
			j = mid-1;
		}
	}
	
	return ans;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n,m;
	cin>>n>>m;
	multiset <ll> arr;
	//vector<ll> arr(n);
	vector<ll> brr(m);
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		arr.insert(a);
	}
	//sort(arr.begin(),arr.end());
	
	for(int i=0;i<m;i++){
		cin>>brr[i];
		auto it = arr.upper_bound(brr[i]);
		if (it==arr.begin()){
			cout << -1 << "\n";
		}
		else{
			cout << *(--it) << "\n";
			arr.erase(it);
		}
	}
	
	return 0;
}
