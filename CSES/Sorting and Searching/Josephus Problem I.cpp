#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	
	int n;
	cin>>n;
	int vis = 0;
	set<int>vec;
	for(int i=1;i<=n;i++){
		vec.insert(i);
	}
	set<int>::iterator it;
	set<int>::iterator curr = vec.begin();
	while(vis<n && !vec.empty()){
		
		set<int>::iterator pos;
		pos = curr;
		++pos;
		if(pos == vec.end()){
			pos = vec.begin();
		}
		cout<<*pos<<" ";
		vis++;
		vec.erase(pos);
		
		curr = pos;
		
	}
	
	return 0;
}
