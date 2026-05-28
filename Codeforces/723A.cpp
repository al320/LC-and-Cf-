#include<bits/stdc++.h>
using namespace std;

int solve(){
    int arr[3];
    for(int i = 0; i<3;i++){
        cin>>arr[i];
    }
    sort(begin(arr),end(arr));
    int ans = abs(arr[0] - arr[1])+abs(arr[2]-arr[1]);
    return ans;
}

int main(){
    cout<<solve()<<'\n';
    return 0;
}

//Approach - Sort the array, the second highest element decides the distance for both friends.
