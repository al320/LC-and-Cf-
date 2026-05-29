#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int s;
    vector<int> vec;
    cin>>n;
    while(n--){
        cin>>s;
        vec.push_back(s);
    }
    for(int i = 1;i<vec.size()+1;i++){
        for(int j = 0;j<vec.size();j++){
            if(vec[j] == i){
                cout<<(j+1)<<" ";
            }
        }
    }cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
//Approach - search the for the index in the vector.
//Time complexity - O(n^2)
