#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	

	int n;
	cin>>n;
	vector<pair<ll,bool> >vec;
	for(int i=0;i<n;i++){
		ll a, b;
		cin>>a>>b;
		vec.push_back({a,true});
		vec.push_back({b,false});
	}
	sort(vec.begin(),vec.end());
	int ans = 0;
	for(int i=0;i<n;i++){
		if(vec[i].second == true){
			ans++;
		}
		else{
			ans--;
		}
	}

	cout<<ans<<endl;
	return 0;
}
