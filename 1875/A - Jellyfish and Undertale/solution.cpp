#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long a, b, n;
    cin >> a >> b >> n;
 
    long long total_time = b;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        total_time += min(x, a - 1);
    }
 
    cout << total_time << "
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