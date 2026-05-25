#include <iostream>
#include <map>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    map<int, int> counts;
    bool found = false;
    
    for (int i = 0; i < n * n; i++) {
        int val;
        cin >> val;
        counts[val]++;
        if (counts[val] > n*(n-1)) {
            found = true;
        }
    }
    
    if (found) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}

//Approach: Count the number which is greater than n*(n-1) times.
