#include<bits/stdc++.h>
using namespace std;

int solve(){
    int a;
    cin>>a;
    int mn,mx;
    vector<int> vec;
    while(a--){
        int s;
        cin>>s;
        vec.push_back(s);
    }auto ele = max_element(vec.begin(),vec.end());
    mx = distance(vec.begin(),ele);
    auto lp = min_element(vec.rbegin(),vec.rend());
    mn = distance(vec.rbegin(),lp);
    int ans = mn+mx;
    if(mn+mx >= vec.size()){
        ans --;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve()<<'\n';
    return 0;
}

//Approach - Calculate the index of highest and the lowest element from first and last respectively, and then caluclate the distance and add the edge case.
