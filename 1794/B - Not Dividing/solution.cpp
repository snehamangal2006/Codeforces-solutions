#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        // Step 1: Replace all 1s with 2s (costs at most 1 op per element)
        if (arr[i] == 1) {
            arr[i]++;
        }
    }
 
    // Step 2: Ensure arr[i+1] is not divisible by arr[i]
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] % arr[i] == 0) {
            arr[i + 1]++;
        }
    }
 
    // Output the result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i == n - 1 ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}