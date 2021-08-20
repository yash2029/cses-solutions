#include <bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int n)
{
    int maxN = 1000000;
    vector<int> spf(maxN+1);
    for(int i = 0; i<=maxN; i++)
        spf[i] = i;
    for(int i = 2; i<=maxN; i+=2)
        spf[i] = 2;
    for(int i = 3; i*i<maxN; i+=2){
        if(spf[i] == i){
            for(int j = i*i; j<maxN; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
    vector<int> ans;
    for(int i = 2; i<=n; i++){
        if(spf[i] == i)
            cout<<i<<" ";
    }
}

int main(){
    sieveOfEratosthenes(1000);
    return 0;
}