#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		long long a,b;
		cin>>a>>b;
		long long mine = min(a,b);
		long long maxe = max(a,b);
		if(maxe<=2*mine && (maxe + mine)%3 == 0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
	
	return 0;
}
