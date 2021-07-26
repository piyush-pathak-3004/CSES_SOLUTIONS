 #include<bits/stdc++.h>
 
 using namespace std;
 /*
 
 aabac
 aaabc
 
 */
 map<string,int>mp;
 int cnt = 0;
 vector<string>vec;
 void generate(string op,string ip,int n){
 	
 	if(op.size() == n){
 		
 		if(mp.find(op) == mp.end()){
 			mp[op] = 1;
 			vec.push_back(op);
			cnt++;	 	
		}
 		return;
	}
	if(ip.size() == 0){
		return;
	}
	
	for(int i=0;i<ip.size();i++){
		string op1 = op;
 		op1 += ip[i];
 		string ip1 = ip;
 		ip1.erase(ip1.begin()+i);
 		generate(op1,ip1,n);
	}
 	
 	
 	
 	
 }
 
 int main(){
 	
 	string s;
 	cin>>s;
 	
 	sort(s.begin(),s.end());
 	int n = s.size();
 	string op = "";
 	generate(op,s,n);
 	cout<<cnt<<endl;
 	
 	for(string ans : vec){
 		cout<<ans<<endl;
	}
 	
 	return 0;
 }
