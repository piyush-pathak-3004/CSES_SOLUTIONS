#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
	
	int n,k;
	cin>>n>>k;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	vector<ll>temp;
	for(int i=0;i<k;i++){
		temp.push_back(arr[i]);
	}
	vector<ll>ans;
	sort(temp.begin(),temp.end());
	
	if(k%2 == 0){
		ans.push_back(temp[(k/2) -1]);
	}
	else{
		ans.push_back(temp[(k/2)]);
	}
	int gap = 1;
	for(int i = k;i<n;i++){
		//temp.erase(temp.begin()+0);
		temp.push_back(arr[i]);
		sort(temp.begin()+gap,temp.end());
		if(k%2 == 0){
			ans.push_back(temp[(k/2) -1 + gap]);
		}
		else{
			ans.push_back(temp[(k/2) + gap]);
		}
		gap++
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
