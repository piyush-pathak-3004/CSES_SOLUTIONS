#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	if(n>=1){
		cout<<0<<endl;
	}
	if(n >= 2){
		cout<<6<<endl;
	}
		
	for(int k=3;k<=n;k++){
		long long square = k*k;
		long long placingTwoKnigth = (square*(square-1))/2;
		long long invalidPos = 4*(k-1)*(k-2);
		cout<<placingTwoKnigth-invalidPos<<endl;
	}
	
	
	return 0;
}
