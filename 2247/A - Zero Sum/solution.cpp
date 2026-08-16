#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
 
    // The sum must be divisible by 4 to be able to reach 0 via +/-4 operations
    if (sum % 4 == 0) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
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