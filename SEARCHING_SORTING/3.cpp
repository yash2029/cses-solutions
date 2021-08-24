#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    int wt[n];
    for(int i = 0; i<n; i++){
        cin>>wt[i];
    }
    sort(wt,wt+n);
    int ans = 0;
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(i == j){
            ans++;
            break;
        }
        if(wt[j]+wt[i] <= k){
            i++;
        }
        j--;
        ans++;
    }
    cout<<ans;
}