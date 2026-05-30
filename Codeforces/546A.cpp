#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,n,w;
    int sm = 0;
    int ans = 1;
    int br = 0;
    cin>> k >> n >> w;
    while(w--){
        sm += ans*k;
        ans++;
    }
    if(sm > n){
        br = sm-n;
    }
    cout<<br<<'\n';
    
    return 0;
}

