#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;

bool compare(pair<int,char> a, pair<int,char> b){
    return a.first < b.first;
}
 
int main(){
    int n;
    cin>>n;
    vector<pair<int,char> > v;
    for(int i = 0; i<n; i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,'s'));
        v.push_back(make_pair(b,'e'));
    }
    sort(v.begin(),v.end(),compare);
    int cur = 0;
    int ans = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i].second == 's')
            cur++;
        else
            cur--;
        ans = max(ans,cur);
    }
    cout<<ans;
    return 0;
}