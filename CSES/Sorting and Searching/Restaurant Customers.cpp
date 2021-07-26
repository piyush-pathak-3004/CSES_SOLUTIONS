#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	vector<pair<ll,bool> >arr;
	for(int i=0;i<n;i++){
		ll a,b;
		cin>>a>>b;
		arr.push_back({a,true});
		arr.push_back({b,false});
	}
	sort(arr.begin(),arr.end());
	int ans = 0;
	int temp = 0;
	for(int i=0;i<2*n;i++){
		
		if(arr[i].second == true){
			temp++;
			ans = max(ans,temp);
		}
		else{
			temp--;
		}
	}
	cout<<ans;
	/*int n;
    cin>>n;
    vector<pair<int,bool>> v;
    int x; int y;
    while(n--){
    	cin>>x;cin>>y;
    	v.push_back(make_pair(x,true));
    	v.push_back(make_pair(y,false));
    }
   	sort(v.begin(),v.end());
   	int ans =0; int maxx =0;
   	for(int i=0;i<v.size();i++){
   		if(v[i].second==true){
   			ans++;
   			maxx = max(ans,maxx);
   		}else{
   			ans--;
   		}
   	}
   	cout<<maxx<<endl;*/
	return 0;
}
