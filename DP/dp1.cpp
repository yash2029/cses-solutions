#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007

using namespace std;

int main(){
	ll n;
	cin>>n;
	ll dp[n+1];
	memset(dp,0,sizeof(dp));
	dp[0] = 1;
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=6; j++){
			if(i-j >= 0){
				dp[i] = (dp[i]%M + dp[i-j]%M)%M;
			}
			else
				break;
		}
	}
	cout<<dp[n];
	return 0;
}