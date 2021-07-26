
#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
#define li long int
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll total = n * (n + 1) / 2;
    if (total % 2 != 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        vector<ll> arr1, arr2;
        total /= 2LL;SS
        while (n)
        {
            if (total - n >= 0)
            {
                arr1.push_back(n);
                total -= n;
            }
            else
            {
                arr2.push_back(n);
            }
            n--;
        }
        cout << arr1.size() << endl;
        for (auto ele : arr1)
            cout << ele << " ";
        cout << endl;
        cout << arr2.size() << endl;
        for (auto ele : arr2)
            cout << ele << " ";
    }
    return 0;
}




















