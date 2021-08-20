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
	vector<int> dp(w+1,0);
	for(int i = 1; i<=n; i++){
		for(int j = w; j>=wt[i]; j--){
				dp[j] = max(dp[j], dp[j-wt[i]]+val[i]);
		}
	}
	cout<<dp[w];
	return 0;
}