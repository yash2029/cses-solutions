#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
	ll n;
	cin>>n;
	vector<string> s;
	for(int i = 0; i<n; i++){
		string temp;
		cin>>temp;
		s.push_back(temp);
	}
	if(s[0][0] == '*'){
		cout<<"0";
		return 0;
	}
	int dp[n][n];
	memset(dp,0,sizeof(dp));
	dp[0][0] = 1;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(s[i][j] == '*')
				continue;
			else{
				if(i-1 >= 0){
					dp[i][j] = (dp[i][j]%M + dp[i-1][j]%M)%M;
				}
				if(j-1 >= 0){
					dp[i][j] = (dp[i][j]%M + dp[i][j-1]%M)%M;
				}
			}
		}
	}
	cout<<dp[n-1][n-1];
	return 0;
}