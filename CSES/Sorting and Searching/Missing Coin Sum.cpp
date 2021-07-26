#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    ll arr[n];
    
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
    sort(arr,arr+n);
    ll ans = 1;
    for(int i=0;i<n;i++){
    	if(ans<arr[i]){
    		break;
		}
		else{
			ans += arr[i];
		}
	}
	cout<<ans;
	return 0;
}
