#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


*/
int main(){
	
	
	int n;
	cin>>n;
	int ans = 1;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<ll>vec;
	//vec.push_back(arr[0]);
	for(int i=0;i<n;i++){
		int low = 0;
		int hi = vec.size()-1;
		int idx = -1;
		while(low<=hi){
			int mid = low + (hi-low)/2;
			
			if(vec[mid] > arr[i]){
				idx = mid;
				hi = mid-1;
			}
			else{
				low = mid+1;
			}
		}
		
		if(idx == -1){
			ans++;
			vec.push_back(arr[i]);
		}
		else{
			vec[idx] = arr[i];
			
		}	
	}
	cout<<vec.size();
	return 0;
	
}
