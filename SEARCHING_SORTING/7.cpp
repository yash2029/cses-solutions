#include<bits/stdc++.h>
#define ll long long int 
#define M 1000000007
 
using namespace std;

int lsearch(int arr[],int n,int k,int found){
    for(int i = 0; i<n; i++){
        if(arr[i] == k && i != found){
            return i;
        }
    }
}
 
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int found = -1;
    set<int> us;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(us.count(k-arr[i]) == 1){
            found = i;
        }
        us.insert(arr[i]);
    }
    if(found == -1){
        cout<<"IMPOSSIBLE";
    }
    else{
        int other = lsearch(arr,n,k-arr[found],found);
        cout<<min(found+1,other+1)<<" "<<max(found+1,other+1);
    }
}