#include<bits/stdc++.h>
using namespace std;

int solve(){
    int ans;
    int arr[8];
    for(int i = 0; i<8;i++){
        cin>>arr[i];
    }
    ans = min({((arr[1]*arr[2])/arr[6]) , (arr[3] * arr[4]), (arr[5]/arr[7])});
    return ans/arr[0]; 
}

int main(){
    cout<<solve()<<'\n';
    return 0;
}

//Approach - Mentioned in the example of it.
