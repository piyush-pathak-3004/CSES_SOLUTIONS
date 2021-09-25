#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<ll, ll>
#define mp make_pair
#define mod 1000000007
#define setbits(x) __builtin_popcountll(x)
#define sp(x, y) fixed << setprecision(y) << x

void isBipartite(int start,int n, int m, int &f, vector<int> &color, vector<int> adj[])
{

    vector<int> vis(n + 1, 0);
    queue<int> q;
    q.push(start);
    vis[start] = 1;
    color[start] = 1;

    while (q.size() > 0)
    {

        int curr = q.front();
        q.pop();

        for (auto child : adj[curr])
        {

            if (color[child] == -1)
            {
                color[child] = 1 - color[curr];
                vis[child] = 1;
                q.push(child);
            }
            else if (color[curr] == color[child])
            {
                f = 0;
                break;
            }
        }
        if (f == 0)
            break;
    }

}

void solve()
{

    int n, m;

    cin >> n >> m;

    vector<int> adj[n+1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    vector<int> color(n + 1, -1);
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        if (color[i] == -1)
        {

            isBipartite(i,n, m, f, color, adj);
            //cout<<"YES"<<endl;
            if (f == 0)
                break;
        }
    }

    
    if (f == 0)
        cout << "IMPOSSIBLE";
    else
    {

        for (int i = 1; i <= n; i++)
        {
            //cout<<"hello"<<endl;
            cout << color[i] + 1 << " ";
        }
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