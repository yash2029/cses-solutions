#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
	ll n,m;
	cin>>n>>m;
	ll arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	vector<vector<ll> > dp(n,vector<ll>(m+1,0));
	if(arr[0] != 0)
		dp[0][arr[0]] = 1;
	else
		for(int i = 1; i<=m; i++)
			dp[0][i] = 1;
	for(int i = 1; i<n; i++){
		if(arr[i] != 0){
			int x = arr[i];
			if(x-1 > 0)
				dp[i][x] = (dp[i][x]%M + dp[i-1][x-1]%M)%M;
			dp[i][x] = (dp[i][x]%M + dp[i-1][x]%M)%M;
			if(x+1 <= m)
				dp[i][x] = (dp[i][x]%M + dp[i-1][x+1]%M)%M;
		}
		else{
			for(int j = 1; j<=m; j++){
				if(j-1 > 0)
					dp[i][j] = (dp[i][j]%M + dp[i-1][j-1]%M)%M;
				dp[i][j] = (dp[i][j]%M + dp[i-1][j]%M)%M;
				if(j+1 <= m)
					dp[i][j] = (dp[i][j]%M + dp[i-1][j+1]%M)%M;
			}
		}
	}
	ll ans = 0;
	for(int i = 0; i<=m; i++)
		ans = (ans%M+ dp[n-1][i]%M)%M;
	cout<<ans;
	return 0;
}