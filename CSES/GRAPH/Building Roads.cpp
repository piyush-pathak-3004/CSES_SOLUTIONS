#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pi pair
#define forn(i,n) for(int i = 0;i<n;i++)
bool comp(pair<ll ,int>a,pair<ll,int>b){
    if(a.first == b.first){
        return (a.second > b.second);
    }
    return (a.first > b.first);
}
int x[4] = {1,-1,0,0};
int y[4] = {0,0,1,-1};


int vis[100001];
vector<int>adj[100001];
int n,m;

/*bool isValid(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m || arr[i][j] == '#' || vis[i][j] == 1){
        return false;
    }
    return true;
}*/

void dfs(int curr){
    
    vis[curr] = 1;
    
    for(auto chid : adj[curr]){
        if(!vis[chid]){
            dfs(chid);
        }
    }
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	
	cin>>n>>m;
	forn(i,n){
	    vis[i+1] = 0;
	}
	forn(i,m){
	    int u,v;
	    cin>>u>>v;
	    adj[u].pb(v);
	    adj[v].pb(u);
	}
	int comp = 0;
	vector<pi<int,int>>ans;
	int prev = 0,curr;
	forn(i,n){
	    if(vis[i+1] == 0){
	        
	        dfs(i+1);
	        if(prev == 0){
	            prev = i+1;
	        }else{
	            curr = i+1;
	            ans.pb({prev,curr});
	            prev = curr;
	        }
	        comp += 1;
	        
	    }
	}
	cout<<comp-1<<endl;
	
	for(auto newRoad : ans){
	    cout<<newRoad.ff<<" "<<newRoad.ss<<endl;
	}
	
	return 0;
}

