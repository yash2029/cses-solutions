#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007

using namespace std;

int main(){
	ll n;
	cin>>n;
	vector<ll> dp(n+1,M);
	dp[0] = 0;
	for(int i = 1; i<=n; i++){
		vector<int> digs;
		int temp = i;
		while(temp){
			digs.push_back(temp%10);
			temp /= 10;
		}
		int m = digs.size();
		for(int j = 0; j<m; j++){
			if(i-digs[j] >= 0){
				dp[i] = min(dp[i],dp[i-digs[j]]+1);
			}
			else
				break;
		}
	}
	cout<<dp[n];
	return 0;
}