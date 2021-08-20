#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
	ll n,sum;
	cin>>n;
	sum = ((n+1)*n)/2;
    if(sum%2){
        cout<<"NO";
        return 0;
    }
    vector<int> a1;
    vector<int> a2;
    cout<<"YES\n";
    sum/=2;
    ll i = n;
    while(i > 0){
        if(i<=sum){
            sum-=i;
            a1.push_back(i);
        }
        else{
            a2.push_back(i);
        }
        i--;
    }
    cout<<a1.size()<<endl;
    for(int i = a1.size()-1; i>=0; i--)
        cout<<a1[i]<<" ";
    cout<<endl<<a2.size()<<endl;
    for(int i = a2.size()-1; i>=0; i--)
        cout<<a2[i]<<" ";
	return 0;
}