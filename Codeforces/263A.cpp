#include<bits/stdc++.h>
using namespace std;

int solve(){
    int ans = 0;
    int mat[5][5];
    int rows = 5;
    int cols = 5;
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            cin>>mat[i][j];
            if(mat[i][j] == 1){
                ans = abs(2-i)+abs(2-j);
            }
        }
    } return ans;
}

int main(){
    cout<<solve()<<'\n';
    return 0;
}

//Approach - Calculate the position of 1 then get the distance.
