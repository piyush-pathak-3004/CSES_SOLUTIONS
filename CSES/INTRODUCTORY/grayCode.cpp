#include<bits/stdc++.h>

using namespace std;

vector<string> grayCode(int n){
	if(n == 1){
		return {"0","1"};
	}
	vector<string> temp = grayCode(n-1);
	vector<string> ans;
	for(auto s : temp){
	    
		s  = "0"+s;
		ans.push_back(s);
	}
	for(int i =  temp.size()-1;i>=0;i--){
		temp[i] = "1"+ temp[i];
		ans.push_back(temp[i]);
	}
	return ans;
}

int main(){
	
	int n;
	cin>>n;
	
	vector<string> ans = grayCode(n);
	for(auto s:ans){
		cout<<s<<endl;
	}
	return 0;
}
