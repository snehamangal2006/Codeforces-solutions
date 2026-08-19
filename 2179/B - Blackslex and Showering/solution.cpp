#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    // 1. Calculate total initial sum of differences
    long long total_sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        total_sum += abs(a[i] - a[i + 1]);
    }
 
    // 2. Case 1: Removing the first element (index 0)
    long long min_sum = total_sum - abs(a[0] - a[1]);
 
    // 3. Case 2: Removing the last element (index n - 1)
    min_sum = min(min_sum, total_sum - abs(a[n - 2] - a[n - 1]));
 
    // 4. Case 3: Removing any middle element (index 1 to n - 2)
    for (int i = 1; i < n - 1; ++i) {
        long long current_sum = total_sum 
                                - abs(a[i - 1] - a[i]) 
                                - abs(a[i] - a[i + 1]) 
                                + abs(a[i - 1] - a[i + 1]);
        min_sum = min(min_sum, current_sum);
    }
 
    cout << min_sum << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}