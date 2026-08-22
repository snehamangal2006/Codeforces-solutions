#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int count = 0;
    
    // Check if the first element starts a segment
    if (a[0] != 0) {
        count++;
    }
 
    // Count transitions from 0 to non-zero
    for (int i = 1; i < n; i++) {
        if (a[i - 1] == 0 && a[i] != 0) {
            count++;
        }
    }
 
    // Cap the result at 2
    cout << min(count, 2) << "
";
}
 
int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}