#include<bits/stdc++.h>

using namespace std;
#define ll long long


/*

1 2 3 1 1
1 2
ans = 3

i = 3
j = 2
ans = 3+3 = 6
i  = 4
j = 3

*/
int main(){
	
	int n,k;
	cin>>n>>k;
	
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long count = 0;
 
    int left = 0;
 
  
    int right = 0;
 
    
    map<ll,int> map;
    
    while (right < n) {
 
        if (map.find(arr[right])==map.end())
            map[arr[right]]=0;
        map[arr[right]]++;
 
        while (map.size() > k) {
            map[arr[left]]= map[arr[left]] - 1;
            if (map[arr[left]] == 0)
                map.erase(arr[left]);
            left++;
        }
        count += right - left + 1;
        right++;
    }
    cout<<count;
	
	
	return 0;
}
