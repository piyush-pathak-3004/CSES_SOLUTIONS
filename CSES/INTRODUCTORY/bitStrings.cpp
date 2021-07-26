#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
#define li long int
#define ll long long
#define ld long double

const ll mod = 1000000007;
using namespace std;

ll power(ll a,ll b){
	if(b == 0){
		return 1;
	}
	if(b == 1){
		return a;
	}
	
	ll temp = power(a,b/2);
	
	temp = ((temp%mod)*(temp%mod))%mod;
	
	if(b%2 == 0){
		return temp%mod;
	}
	return (temp*a)%mod;
}

int main()
{
    ll n;
    cin >> n;
    
    ll ans = power(2,n);
    
    cout<<ans<<endl;
    
    return 0;
}




















