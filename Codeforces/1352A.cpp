#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q;
    int n;
    cin>>q;
    while(q--){
        cin>>n;
        vector<int> vec;
        int var = 1;
        while(n>0){
            
            int rem = (n%10)*var;
            var *= 10;
            n /= 10;
            if(rem == 0){
                continue;
            }else{
            vec.push_back(rem);
            }
        }           cout<<vec.size()<<endl;
            for(auto i : vec){
                cout<<i<<" ";
            }
        cout<<'\n';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

//Approach - Used the modulo operator and a loop for getting the integers out and multiplying with their face value.
