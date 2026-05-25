#include<iostream>
using namespace std;
 
void arr(int n){
    for(int i = 0;i<(n);i++){
        cout<<(2*i+1)<<" ";
    }cout<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin>>a;
    for(int j = 0;j<a;j++){
        int b;
        cin>>b;
        arr(b);
    }
    return 0;
}

//The approach is quite simple, we can will print out the odd numbers from the given range, and that's  how we'll create our array.
//Time Complexity O(n)

