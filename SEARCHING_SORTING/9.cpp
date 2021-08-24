#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    int m = a[n/2];
    ll ans = 0;
    for(int i = 0; i<n; i++)
        ans+=abs(a[i]-m);
    cout<<ans;
    return 0;
}