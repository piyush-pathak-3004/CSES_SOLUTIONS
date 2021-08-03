#include<bits/stdc++.h>

using namespace std;

int x[] = {1,-1,0,0};
int y[]=  {0,0,1,-1};
bool isValid(vector<vector<char>>&arr,int n,int m,int i,int j){
    if(i<0 || j<0 || i>=n || j>=m ||arr[i][j] == '#'){
        return false;
    }
    return true;
}

void dfs(vector<vector<char>>&arr,int n,int m,int curr_i,int curr_j){
    
    if(!isValid(arr,n,m,curr_i,curr_j)){
        return;
    }
    
    arr[curr_i][curr_j] = '#';
    
    for(int k=0;k<4;k++){
        dfs(arr,n,m,curr_i+x[k],curr_j + y[k]);
    }
    
}

int main(){
    
    
    int n,m;
    cin>>n>>m;
    vector<vector<char>>arr;
    for(int i=0;i<n;i++){
        vector<char>row;
        for(int j=0;j<m;j++){
            char a;
            cin>>a;
            row.push_back(a);
        }
        arr.push_back(row);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == '.'){
                dfs(arr,n,m,i,j);
                ans += 1;
            }
            
        }
    }
    
    cout<<ans;
    
}
