#include<bits/stdc++.h>

using namespace std;

int main(){
	//495633841728043220
	//495633841537090606
	//873804457988118040
	//873804459215846242
	int t;
	cin>>t;
	while(t--){
		long long x,y;
		cin>>x>>y;
		long long ans;
		if(y>x){
			if(y%2 == 0){
				ans = ((y-1)*(y-1))+x;
			}
			else{
				ans = (y*y)-x + 1;
			}
		}
		
		
		
		else{
			if(x%2 != 0){
				ans = ((x-1)*(x-1)) + y;
			}
			else{
				
				ans = (x*x)-y+1;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
