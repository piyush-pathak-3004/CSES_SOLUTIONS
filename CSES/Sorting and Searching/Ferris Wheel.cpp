#include<bits/stdc++.h>

using namespace std;

#define ll long long
// list[] = {w1,w2,w3,w4,w5,w6}
int main(){
	
	int n,x;
	scanf("%d%d",&n,&x);
	ll arr[n];
	
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	
	sort(arr,arr+n);
	
	int ans = 0;
	
	int i = 0;
	int j = n-1;
	
	while(i<j){
		ans++;
		//cout<<ans<<endl;
		if(arr[i] + arr[j] <=x){
			
			i++;
			j--;
		}
		else{
			
			j--;
		}
	}
	if(i == j){
	    ans++;
	}
	printf("%d",ans);
	
	return 0;
}
