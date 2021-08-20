#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
	ll n,temp;
	cin>>n;
	ll sum = ((n+1)*n)/2;
	for(int i = 0; i<n-1; i++){
		cin>>temp;
		sum-=temp;
	}
	cout<<sum;
	return 0;
}