#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    return a.second <= b.second;
}
 
int main(){
    int n,m;
    cin>>n>>m;
    multiset<int> s;
    multiset<int>::iterator itr;
    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    for(int i = 0; i<m; i++){
        int a;
        cin>>a;
        itr = s.lower_bound(a);
        if(*itr == a){
            cout<<*itr<<endl;
            s.erase(itr);
        }
        else if(itr == s.begin()){
            cout<<"-1\n";
        }
        else{
            cout<<*(--itr)<<endl;
            s.erase(itr);   
        }
    }    
    return 0;
}