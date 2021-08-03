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
int vis[1001][1001];
char arr[1001][1001];
int dist[1001][1001];
int n,m;

bool isValid(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m || arr[i][j] == '#' || vis[i][j] == 1){
        return false;
    }
    return true;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int x[4] = {1,-1,0,0};

	int y[4] = {0,0,1,-1};
	
	map<int,char>mv;
	
	mv[0] = 'D';
	mv[1] = 'U';
	mv[2] = 'R';
	mv[3] = 'L';
	cin>>n>>m;
	
	
	pi<int,int>src;
	pi<int,int>dest;
	forn(i,n){
	    forn(j,m){
	        cin>>arr[i][j];
	        vis[i][j] = 0;
	        dist[i][j] = INT_MAX;
	        if(arr[i][j] == 'A'){
	            src = {i,j};
	            dist[i][j] = 0;
	        }
	        if(arr[i][j] == 'B'){
	            dest = {i,j};
	            
	        }
	    }
	}
	
	map<pi<int,int>,pi<pi<int,int>,char>>mp;// {chid,{parents,path}}
    
    
    queue<pi<int,int>>q;
    q.push(src);
    
    vis[src.ff][src.ss] = 1;
    
    bool isEnd = false;
    
    while(!q.empty()){
        
        int sz = q.size();
        //q.pop();
        
        forn(i,sz){
            
            auto temp = q.front();
            q.pop();
            
            int curr_i = temp.ff;
            int curr_j = temp.ss;
            
            forn(j,4){
                int nextX = curr_i+x[j]; 
                int nextY = curr_j+y[j];
                
                char move = mv[j];
                if(isValid(nextX,nextY)){
                    vis[nextX][nextY] = 1;
                    q.push({nextX,nextY});
                    dist[nextX][nextY] = min(dist[nextX][nextY],1+dist[curr_i][curr_j]);
                    
                    mp[{nextX,nextY}] = {{curr_i,curr_j},move};
                    if(nextX == dest.ff  && nextY == dest.ss){
                        isEnd = true;
                        //cout<<"hellow ";
                        break;
                    }
                }
            }
            
            if(isEnd){
                break;
            }
            
        }
        if(isEnd){
            break;
        }
        
    }
    
    if(isEnd == false){
        cout<<"NO";
    }else{
        
        cout<<"YES"<<endl;
        cout<<dist[dest.ff][dest.ss]<<endl;
        auto pos = dest;
        string path = "";
        while(pos != src){
            auto data = mp[pos];
            pos = data.ff;
            char move = data.ss;
            path.pb(move);
        }
        reverse(path.begin(),path.end());
        cout<<path;
        
    }
	
	return 0;
}

