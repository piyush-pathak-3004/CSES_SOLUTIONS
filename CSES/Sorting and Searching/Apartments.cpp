#include<bits/stdc++.h>

using namespace std;

#define ll long long
bool lower_bound(ll min_size,ll max_size,ll brr[],int &idx,int m,bool sold[]){
	
	int l = 0;
	int h = m-1;
	
	while(l<=h){
		int mid = l + (h-l)/2;
		if(brr[mid]>=min_size && brr[mid]<= max_size && sold[mid] == false){
			idx = mid;
			h = mid-1;
		}
		else if(brr[mid] > max_size){
			h = mid-1;
		}
		else{
			l = mid+1;
		}
		
	}
	
	if(idx == -1)
		return false;
	
	return true;
	
}
int main(){
	
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	ll arr[n];
	ll brr[m];
	bool sold[m];
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%lld",&brr[i]);
		sold[i] = false;
	}
	sort(arr,arr+n);
	sort(brr,brr+m);
	
	int ans = 0;
	
	for(int i=0;i<n;i++){
		ll low = arr[i]-k;
		ll high = arr[i]+k;
		int idx = -1;
		if(lower_bound(low,high,brr,idx,m,sold) && sold[idx] == false){
			sold[idx] = true;
			ans++;
		}
	}
	printf("%d",ans);
	
	
	return 0;
}
