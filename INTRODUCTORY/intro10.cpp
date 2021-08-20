#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
	ll n;
	cin>>n;
	int ans = 0;
    while(n>0){
        ans = ans + floor(n/5);
        n/=5;
    }
    cout<<ans;
	return 0;
}