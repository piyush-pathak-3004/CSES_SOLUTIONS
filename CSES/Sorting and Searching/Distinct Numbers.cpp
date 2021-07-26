#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	
	int n;
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	
	sort(arr,arr+n);
	
	int ans = 0;
	
	for(int i=0;i<n;i++){
		ans++;
		ll a = arr[i];
		while(i<n && arr[i] ==a){
			i++;
		}
		i--;
	}
	printf("%d",ans);
	
	return 0;
}
