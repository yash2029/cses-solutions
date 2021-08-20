#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
	string s;
	cin>>s;
	if(s.length() == 0){
		cout<<"0";
		return 0;
	}
	int ans = 1;
	int cur = 1;
	char ch = s[0];
	for(int i = 1; i<s.length(); i++){
		if(s[i] == ch){
			cur++;
		}
		else{
			cur = 1;
			ch = s[i];
		}
		ans = max(ans,cur);
	}
	cout<<ans;
	return 0;
}