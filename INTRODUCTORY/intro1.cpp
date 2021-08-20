#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
	ll n;
	cin>>n;
	while(n > 1){
		cout<<n<<" ";
		if(n%2 == 0)
			n/=2;
		else
			n=(n*3)+1;
	}
	cout<<"1";
	return 0;
}