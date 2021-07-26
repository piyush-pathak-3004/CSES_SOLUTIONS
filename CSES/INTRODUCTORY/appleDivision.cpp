#include<bits/stdc++.h>
 
using namespace std;
 /*
 */

long long minDiff(int curr,long long target,long long arr[],int n){
	
	if(curr == n){
		return 0;
	}
	
	if(target-arr[curr] < 0){
		return minDiff(curr+1,target,arr,n);
	}
	return max(arr[curr] + minDiff(curr+1,target-arr[curr],arr,n), minDiff(curr+1,target,arr,n));
}

int main(){
 	
 	int n;
 	cin>>n;
 	long long arr[n];
 	long long sum = 0;
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
 		sum += arr[i];
	}
	
	long long target = sum/2;
	
	
	long long s1 = minDiff(0,target,arr,n);
	
	long long s2 = sum-s1;
	
	long long ans = abs(s1-s2);
	
	cout<<ans<<endl;
	
 	
 	return 0;
}
