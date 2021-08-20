#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;

int lcs(int x, int y, string s1, string s2)
{
    int dp[x+1][y+1];
    memset(dp,0,sizeof(dp));
    for(int i = 0; i<=x; i++){
        for(int j = 0; j<=y; j++){
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[x][y];
}
 
int main(){
	string s1,s2;
    cin>>s1>>s2;
    cout<<lcs(s1.length(),s2.length(),s1,s2);
	return 0;
}