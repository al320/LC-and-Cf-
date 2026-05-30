#include<bits/stdc++.h>
using namespace std;

void solve(){
    string n;
    cin>>n;
    int ans = 0;
    for(int i = 0;i<n.size();i++){
        if(n[i] == '4' || n[i] == '7'){
            ans++;
        }
    }if(ans == 4 || ans == 7){
            cout<<"YES"<<'\n';
            return;
        }
        cout<<"NO"<<'\n';

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
//Approach - convert the big number in string so that we have a max of 19 iteration to avoid TLE.
