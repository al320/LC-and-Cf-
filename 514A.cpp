#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        int d = s[i] - '0';
        if(i == 0 && d == 9){
            continue;
        }
        if(d > 4){
            d = 9 - d;
            s[i] = d + '0';        
        }
    }
    cout<<s<<endl;
    return 0;
}

//Approach - Used ascii to integer conversion, and added an exception of first digit to be 0
//Time complexity = O(n);
