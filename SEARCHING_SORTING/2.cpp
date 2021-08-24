#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int app[n],hs[m];
    for(int i = 0; i<n; i++){
        cin>>app[i];
    }
    for(int i = 0; i<m; i++){
        cin>>hs[i];
    }
    sort(app,app+n);
    sort(hs,hs+m);
    int i = 0;
    int j = 0;
    int ans = 0;
    while(i<n && j<m){
        while( j < m && hs[j] < app[i]-k) {
            j++;
        }
        if( j < m && hs[j] <= app[i]+k ){
            j++;
            ans++;
        }
        i++;
    }
    cout<<ans;
}