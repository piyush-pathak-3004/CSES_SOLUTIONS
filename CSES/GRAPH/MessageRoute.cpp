#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<ll, ll>
#define pi pair<int,int>
#define mp make_pair
#define mod 1000000007
#define setbits(x) __builtin_popcountll(x)
#define sp(x, y) fixed << setprecision(y) << x

void solve(){


    int n,m;
    cin>>n>>m;
    map<int,int>parent;
    vector<int>arr[n+1];
    
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }

    vector<int>vis(n+1,0);
    queue<int>q;
    q.push(1);
    vis[1] = 1;
    int level = 0;
    int found = 0;
    while(q.size()>0){

        int qsz = q.size();

        for(int i=0;i<qsz;i++){
            int curr = q.front();
            q.pop();
            
            int sz = arr[curr].size();
            for(int j = 0;j<sz;j++){
                if(vis[arr[curr][j]] == 0){
                    q.push(arr[curr][j]);
                    parent[arr[curr][j]] = curr;
                    vis[arr[curr][j]] = 1;
                }
                
            }
            if(curr == n){
                found = 1;
                break;
            }
        }
        level++;
        if(found) break;
    }

    if(found){
        cout<<level<<endl;
        int c = n;
        vector<int>ans;
        ans.pb(n);
        while (c!=1)
        {
            ans.pb(parent[c]);
            c = parent[c]; 
        }
        reverse(ans.begin(),ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        
    
    }
    else{
        cout<<"IMPOSSIBLE";
    }
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    //
    // For getting input from input.txt file
freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
#endif
    int t;
    t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {

        solve();
    }
    return 0;
}