#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	cin>>s;
	
	int n = s.size();
	int ans = 1;
	for(int i=0;i<n;i++){
		char curr = s[i];
		int temp = 0;
		while(i<n && s[i] == curr){
			i++;
			temp++;
		}
		i--;
		ans = max(ans,temp);
	}  
	//ans = max(ans,temp);
	cout<<ans<<endl;
	
	return 0;
}
