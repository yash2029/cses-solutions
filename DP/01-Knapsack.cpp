#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
	int n,w,temp;
	cin>>n>>w;
	vector<int> wt;
	vector<int> val;
	wt.push_back(w+1);
	val.push_back(0);
	for(int i = 0; i<n; i++){
		cin>>temp;
		wt.push_back(temp);
	}
	for(int i = 0; i<n; i++){
		cin>>temp;
		val.push_back(temp);
	}
	vector<vector<int> > dp(n+1,vector<int>(w+1,0));
	for(int i = 0; i<=n; i++){
		for(int j = 0; j<=w; j++){
			if(i == 0 || j == 0)
				dp[i][j] = 0;
			else if(wt[i] <= j)
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-wt[i]]+val[i]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	cout<<dp[n][w];
	return 0;
}