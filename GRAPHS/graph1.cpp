#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;

vector<vector<int>> vis(1000,vector<int>(1000,0));
vector<string> v;
int n,m,ans;

void dfs(int i,int j){
    //cout<<ans<<" "<<i<<" "<<j<<endl;
    vis[i][j] = 1;
    if(i-1 >= 0 && vis[i-1][j] == 0 && v[i-1][j] != '#')
        dfs(i-1,j);
    if(j-1 >= 0 && vis[i][j-1] == 0 && v[i][j-1] != '#')
        dfs(i,j-1);
    if(i+1 < n && vis[i+1][j] == 0 && v[i+1][j] != '#')
        dfs(i+1,j);
    if(j+1 < m && vis[i][j+1] == 0 && v[i][j+1] != '#')
        dfs(i,j+1);
}
 
int main(){
    ans=0;
    cin>>n>>m;
    for(int i = 0; i<n; i++){
        string t;
        cin>>t;
        v.push_back(t);
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(v[i][j] != '#' && vis[i][j] == 0){
                dfs(i,j);
                ans++; 
            }
        }
    }
    cout<<ans;
}