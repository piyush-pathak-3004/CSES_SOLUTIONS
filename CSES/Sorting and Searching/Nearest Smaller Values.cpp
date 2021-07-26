#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
		
	int n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans = 0;
	stack<ll>stk;
	//stk.push(1);
	for(int i=0;i<n;i++){
		while(!stk.empty() && arr[stk.top()-1] >= arr[i]){
			stk.pop();
		}
		if(stk.empty()){
			cout<<0<<" ";
		}
		else{
			cout<<stk.top()<<" ";
		}
		stk.push(i+1);
	}

	return 0;
}
