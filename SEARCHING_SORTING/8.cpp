#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    ll a[n];
    ll m = -10000000000;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        m = max(m,a[i]);
    }
    if(m <= 0){
        cout<<m;
        return 0;
    }
    ll ans = a[0];
    ll cur = 0;
    for(int i = 0; i<n; i++){
        cur += a[i];
        if(cur<0)
            cur=0;
        ans=max(ans,cur);
    }
    cout<<ans;
    return 0;
}