#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i = 1;i<n+1;i++){
        if(i%2 != 0){
            for(int j = 0;j<m;j++){
            cout<<"#";
            }cout<<endl;
        }else if(i%2 == 0 && i%4 != 0){
            for(int j = 1;j<m;j++){
                cout<<".";
            }cout<<"#"<<'\n';
        }else if(i%2==0 && i%4==0){
            cout<<"#";
            for(int j = 1;j<m;j++){
                cout<<".";
            }cout<<endl;
        }

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

//Approach - Find the pattern for odd indices it is # fully , for 4n+2 and 4n+4 it is different
