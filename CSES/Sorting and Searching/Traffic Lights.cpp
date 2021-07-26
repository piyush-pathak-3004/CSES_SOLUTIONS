#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	
	int x,n;
	cin>>x>>n;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	set<ll>s;
	multiset<ll>ms;
	s.insert(0);
	s.insert(x);
	ms.insert(x);
	set<ll>::iterator it1;
	set<ll>::iterator it2;
	for(int i=0;i<n;i++){
		
		it1 = s.upper_bound(arr[i]);
		it2 = it1;
		--it2;
		ms.erase(ms.find(*it1 - *it2));
		ms.insert(*it1 - arr[i]);
		ms.insert(arr[i] - *it2);
		s.insert(arr[i]);
		
		it1 = ms.end();
		it1--;
		cout<<*it1<<" ";
	}
	
	return 0;
}
