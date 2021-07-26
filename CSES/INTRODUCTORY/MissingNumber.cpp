#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int arr[200002];
	
	int i;
	for(i = 1;i<=n-1;i++){
		int a;
		cin>>a;
		arr[a] = 1;	
	}
	
	for(i =1;i<=n;i++){
		if(arr[i] != 1){
			cout<<i<<endl;
		}
	}
	
	
	return 0;
}
