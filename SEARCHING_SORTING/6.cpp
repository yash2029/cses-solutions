#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    return a.second <= b.second;
}
 
int main(){
    int n;
    cin>>n;
    set<pair<int,int> > s;
    for(int i = 0; i<n; i++){
        int a,b;
        cin>>a>>b;
        s.insert(make_pair(a,b));
    }
    vector<pair<int,int> > v(s.begin(),s.end());
    int ans = 1;
    int curr = 0;
    sort(v.begin(),v.end(),compare);
    for(int i = 1; i<v.size(); i++){
        while(v[i].first >= v[curr].second){
            ans++;
            curr = i;
        }
    }
    cout<<ans;
    return 0;
}