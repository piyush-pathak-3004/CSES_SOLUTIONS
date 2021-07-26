#include<bits/stdc++.h>

using namespace std;

void solve(long long n){
	
	if(n == 1){
		cout<<1;
		return;
	}
	cout<<n<<" ";
	if(n%2 == 0){
		solve(n/2);
	}
	else{
		solve(3*n +1);
	}	
}

int main()
{
	
	long long  n;
	cin>>n;
	
	solve(n);
	cout<<endl;
	return 0;
	
	
}
