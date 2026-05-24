#include<iostream>
#include<vector>
using namespace std;

void arr(vector<int>& vec,int n){
    for(int i = 0;i<n;i++){
            int mx = 0;
            int mn = 0;
        for(int j =(i+1);j<n;j++){
            //Max Counting
            if(vec[i]>vec[j]){
                mx++;
            }else if(vec[j]>vec[i]){
                mn++;
            }
        }cout<<max(mx,mn)<<" ";
    }
}

int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        arr(vec,vec.size());
        cout<<'\n';
}

    return 0;
}

//The approach: Calculate the max(numbers greater than the number at index i,numbers lesser than the number at index i) and print out them with a complexity of O(n^2)
