#include<iostream>
#include<vector>
#include<algorithm>
#include<strings.h>
using namespace std;

void maxChar(string &vec, int n){
    for(int i=1; i < n-1; i++){
        if (vec[i+1] == '1' && vec[i-1] == '1'){
            vec[i] = '1';
        } 
    }int mx = count(vec.begin(),vec.end(),'1');

    for(int i=1; i < n-1; i++){
        if (vec[i+1] == '1' && vec[i-1] == '1'){
            vec[i] = '0';
        }
} int mn = count(vec.begin(),vec.end(),'1');
cout<<mn<<" "<<mx<<'\n';
}

int main(){
    int q;
    int n;
    cin>>q;
    string s;
    while(q--){
        cin>>n;
        cin>>s;
        maxChar(s,n);
    }cout<<'\n';
    return 0;
}

//Approach - first find all the needy positions(e,g. i+1 and i-1 == 1)positions and replace them with 1 entirely, then traverse again for the updated string and replace them with 0
//Time Complexity - O(n)
