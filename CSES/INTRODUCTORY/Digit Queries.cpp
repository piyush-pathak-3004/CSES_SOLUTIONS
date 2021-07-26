#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long 
// list[] = {w1,w2,w3,w4,w5,w6}
ull power(ull a,ull b){
	
	if(b == 0){
		return 1;
	}
	if(b == 1){
		return a;
	}
	
	ull temp = power(a,b/2);
	temp = temp*temp;
	
	if(b%2 == 0){
		return temp;
	}
	return temp*a;
	
}
int main(){
	
	int q;
	scanf("%d",&q);
	
	while(q--){
		ull k;
		scanf("%ull",&k);
		ull sum = 0;
		int r = 0;
		ull prev = 0;
		while(sum<=k){
			prev = 9*(r+1)*power(10,r);
			sum += prev;
			r++;
		}
		sum -= prev;
		int digit = r+1;
		
		ull minNum = 1;
		string s = "1";
		for(int i=0;i<r;i++){
			minNum *= 10;
			s += "0";
		}
		
		if(sum == k){
			cout<<"9"<<endl;
		}
		else{
			ull dst = k-sum;
			ull num = dst/digit;
			
			ull ans = minNum + num - 1;
			
			int whichDigit = dst%digit;// 0 means last digit 
			if(whichDigit == 0){
				cout<<s[r]<<endl;
			}
			else{
				cout<<s[whichDigit-1]<<endl;
			}
		}
		
		
		
	}
	
	return 0;
}
