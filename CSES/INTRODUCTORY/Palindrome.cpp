#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	cin>>s;
	int n = s.size();
	int arr[26];
	for(int i=0;i<26;i++){
		arr[i] = 0;
	}
	
	for(int i=0;i<n;i++){
		arr[s[i]-'A']++;
	}
	int oddFeq = 0;
	int oddidx = -1;
	for(int i=0;i<26;i++){
		if(arr[i]%2 != 0){
			oddFeq++;
			oddidx = i;
		}
	}
	
	if((n%2 == 0 && oddFeq != 0) || n%2 != 0 && oddFeq>1){
		cout<<"NO SOLUTION";
	}
	
	else{
		string ans = "";
		if(n%2 == 0){
			for(int i=0;i<26;i++){
			
				int a = arr[i]/2;
				arr[i] = arr[i] - a;
				while(a--){
					
					ans += ('A'+i);
				}
				
			}
			for(int i=25;i>=0;i--){
			
				int a = arr[i];
				arr[i] = arr[i] - a;
				while(a--){
					ans += ('A'+i);
				}
			}	
		}
		else{
			
			
			for(int i=0;i<26;i++){
				if(i == oddidx){
					continue;
				}
				int a = arr[i]/2;
				
				arr[i] = arr[i] - a;
				while(a--){
					
					ans += ('A'+ i);
				}
				
			}
			
			int a = arr[oddidx];
			while(a--){
				
				ans += ('A'+ oddidx);
			}
			
			
			for(int i=25;i>=0;i--){
				if(i == oddidx){
					continue;
				}
				int a = arr[i];
				
				while(a--){
				
					ans += ('A'+i);
				}
			}
			
		}
		//cout<<"hi"<<endl;
		cout<<ans;
		
	}
	
	return 0;
}
