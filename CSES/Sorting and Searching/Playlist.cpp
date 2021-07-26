#include<bits/stdc++.h>

using namespace std;
#define ll long long


/*

1 2 3 4 5 6 7 3 a1 a2 .....


*/

int main(){
	
	
	int n;
	cin>>n;
	
	ll arr[n];
	map<ll,int>mp;
	int ans = 0;
	int temp = 0;
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		arr[i] = a;
	}
	
	int i = 0,j=0;
	
	while(j<n){
		if(mp.find(arr[j]) == mp.end()){
			mp[arr[j]] = 1;
			j++;
		}
		else{
			ans = max(ans,j-i);
			while(i<j && arr[i] != arr[j]){
				
				mp.erase(arr[i]);
				i++;
			}
			i++;
			j++;
		}
	}
	
	ans = max(j-i,ans);
	cout<<ans<<endl;
	
	return 0;
}
