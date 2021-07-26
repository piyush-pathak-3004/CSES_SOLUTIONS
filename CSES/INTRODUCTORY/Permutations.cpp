#include<bits/stdc++.h>
using namespace std;
// 11
//1 3 5 7 9 11
//2 4 6 8 10
//
int main(){
	
	int n;
	cin>>n;
	bool ans = true;
	if(n == 1){
		cout<<1;
		ans = false;
	}
	if(n<=3 && ans){
		cout<<"NO SOLUTION";
		ans = false;
	}
	if(ans){
		for(int i=2;i<=n;i+=2){
			cout<<i<<" ";
		}
		for(int i=1;i<=n;i+=2){
			cout<<i<<" ";
		}
		
	}
	
	
	return 0;
}
