#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
	ll n;
	cin>>n;
	int ans = 2;
    for(int i = 2; i<=n; i++){
        ans = (ans%M * 2)%M;
    }
    cout<<ans;
	return 0;
}