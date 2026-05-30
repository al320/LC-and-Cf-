#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    unordered_set<char> ans(s.begin(),s.end());
    if(ans.size() % 2 != 0){
        cout<<"IGNORE HIM!"<<'\n';
    }else{
        cout<<"CHAT WITH HER!"<<'\n';
    }
    return 0;
}

//Learned Set here

