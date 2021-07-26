#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
#define li long int
#define ll long long
#define ld long double
/*

5*2 = 10


20/5 = 4
20/25 = 0



*/
const ll mod = 1000000007;
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    
    for(int i=5;i<=n;i *=5){
    	ans += n/i;
	}
    cout<<ans<<endl;
    
    return 0;
}

