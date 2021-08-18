#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007

using namespace std;

int main(){
	ll n,m;
	cin>>m>>n;
	ll coin[m];
	vector<ll> dp(n+1,M);
	for(int i = 0; i<m; i++){
		cin>>coin[i];
	}
	sort(coin,coin+m);
	dp[0] = 0;
	for(int i = 1; i<=n; i++){
		for(int j = 0; j<m; j++){
			if(i-coin[j] >= 0){
				dp[i] = min(dp[i],dp[i-coin[j]]+1);
			}
			else
				break;
		}
	}
	if(dp[n] == M)
		cout<<"-1";
	else
		cout<<dp[n];
	return 0;
}