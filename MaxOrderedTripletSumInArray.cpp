#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;
 
int main(){
    int n, m = -1;
    int ans = 0;
    cin>>n;
    int arr[n], max_arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = n-1; i>=0; i--){
        if(arr[i] > m)
            m = arr[i];
        max_arr[i] = m;
    }
    set<int> us;
    us.insert(arr[0]);
    for(int i = 1; i<n-1; i++){
        int x,y,z;
        y = arr[i];
        z = max_arr[i+1];
        x = *(us.lower_bound(y));
        if(z == y){
            continue;
            us.insert(y);
        }
        if(x == y && us.lower_bound(y) == us.begin()){
            continue;
            us.insert(y);
        }
        else{
            x = *(--us.lower_bound(y));
            us.insert(y);
        }
        ans = max(ans,x+y+z);
        cout<<x<<" "<<y<<" "<<z<<" = "<<x+y+z<<endl; 
    }
    cout<<ans;
    return 0;
}