#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int arr[n];
	if(n == 1){
		cout<<"1";
	}
	else if(n == 2 || n == 3){
		cout<<"NO SOLUTION";
	}
	else if(n == 4){
		cout<<"2 4 1 3";
	}
	else{
		for(int i = n; i>0; i-=2){
			cout<<i<<" ";
		}
		for(int i = n-1; i>0; i-=2){
			cout<<i<<" ";
		}
	}
	return 0;
}