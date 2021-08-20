long long minCost(long long arr[], long long n) {
    multiset<long long int> ms;
    for(long long int i = 0; i<n; i++)
        ms.insert(arr[i]);
    long long int ans = 0;
    while(ms.size() > 1){
        long long int a,b;
        a = *(ms.begin());
        b = *(++ms.begin());
        ans += (a+b);
        auto it = ms.begin();
        for(long long int i = 0; i<2; i++){
            it = ms.erase(it);    
        }
        ms.insert(a+b);
    }
    return ans;
}

int main(){
    long long int n;
    cin>>n;
    long long int i,a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];
    cout<<minCost(a,n);
    return 0;
}