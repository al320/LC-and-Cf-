#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    int mn = INT_MIN;
    int min_cap =0;
    int arr[n][2];


    for(int i=0;i<n;i++){
        for(int j = 0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        min_cap += arr[i][1] - arr[i][0];
        mn = max(min_cap,mn);
    }
    return mn;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout<<solve()<<'\n';
    return 0;
}

//Approach - This is an array approach I used. calculating the maximum number and fixing it is the approach.
//Time complexity - O(n) as the j loop is constant.

//I used google to get a help and got O(1) solution and it is very good.

#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin >> n;
    
    int current_passengers = 0;
    int max_capacity = 0; // Using 0 is safe since capacity is never negative

    for(int i = 0; i < n; i++){
        int exit, enter;
        cin >> exit >> enter; // Read values directly without storing them in an array
        
        current_passengers += enter - exit;
        max_capacity = max(max_capacity, current_passengers);
    }
    
    return max_capacity;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << solve() << '\n';
    return 0;
}

//This is a very optimised approach and I'll use it later.

