#include<bits/stdc++.h>

using namespace std;

#define ll long long

/*

3 2 1 4 5
a = 2;
b = 3;
3 1 2 4 5
final ans = 1+1 = 2

initial ans = 1+1+1 = 3

a < mp[arr[a-1]+1] && b >= mp[arr[a-1]+1]
a > mp[arr[a-1]+1] && b <= mp[arr[a-1]+1]
b < mp[arr[b-1]+1] && a > mp[arr[b-1]+1]
b > mp[arr[b-1]+1] && a <= mp[arr[b-1]+1]

*/

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
	int n,m;
	cin>>n>>m;
	
	ll arr[n];
	map<ll,int>mp;
	int ans = 1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]] = i+1;
	}
	for(int i=1;i<n;i++){
		if(mp[i] > mp[i+1]){
			ans++;
		}
	}
	
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;

		if(a > mp[arr[a-1]-1] && b <= mp[arr[a-1]-1]){
			ans++;
		}
		else if(a < mp[arr[a-1]-1] && b >= mp[arr[a-1]-1]){
			ans--;
		}

		if(mp.find(arr[a-1]+1) != mp.end() && a < mp[arr[a-1]+1] && b >= mp[arr[a-1]+1]){
			ans++;
		}
		else if(mp.find(arr[a-1]+1) != mp.end() && a > mp[arr[a-1]+1] && b <= mp[arr[a-1]+1]){
			ans--;
		}
		//

		if(mp.find(arr[a-1]+1) != mp.end() && a < mp[arr[a-1]+1] && b >= mp[arr[a-1]+1]){
			ans++;
		}
		else if(mp.find(arr[a-1]+1) != mp.end() && a > mp[arr[a-1]+1] && b <= mp[arr[a-1]+1]){
			ans--;
		}
		if(b < mp[arr[b-1]-1] && a >= mp[arr[b-1]-1]){
			ans--;
		}
		else if( b > mp[arr[b-1]-1] && a <= mp[arr[b-1]-1]){
			ans++;
		}

		swap(arr[a-1],arr[b-1]);
		mp[arr[a-1]] = a;
		mp[arr[b-1]] = b;
		cout<<ans<<endl;
	}
	
	return 0;
}
