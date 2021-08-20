#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
	ll ans=0,n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	for(int i = 1; i<n; i++){
		if(arr[i] >= arr[i-1])
			continue;
		else{
			ans+=(arr[i-1]-arr[i]);
			arr[i] = arr[i-1];
		}
	}
	cout<<ans;
	return 0;
}