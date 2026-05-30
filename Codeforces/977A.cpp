#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>> n >> m;
    while(m--){
        if(n%10 != 0){
            n -= 1;
        }else{
            n /= 10;
    }
    }cout<<n<<'\n';
    return 0;
}

//Pretty simple easy to understand approach.

