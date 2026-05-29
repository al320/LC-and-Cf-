#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    int ans = 0;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s == "Tetrahedron"){
            ans += 4;
        }else if(s == "Cube"){
            ans += 6;
        }else if(s == "Octahedron"){
            ans += 8;
        }else if(s == "Dodecahedron"){
            ans += 12;
        }else if(s == "Icosahedron"){
            ans += 20;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve()<<'\n';
    return 0;
}
