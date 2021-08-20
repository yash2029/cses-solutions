#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007

using namespace std;

int main(){
	ll n,m;
	cin>>m>>n;
	ll coin[m];
	vector<ll> dp(n+1,0);
	for(int i = 0; i<m; i++){
		cin>>coin[i];
	}
	sort(coin,coin+m);
	dp[0] = 1;
	for(int i = 1; i<=n; i++){
		for(int j = 0; j<m; j++){
			if(i-coin[j] >= 0){
				dp[i] = (dp[i]%M + dp[i-coin[j]]%M)%M;
			}
			else
				break;
		}
	}
	cout<<dp[n];
	return 0;
}