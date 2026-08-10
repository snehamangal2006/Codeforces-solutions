#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int xor_sum = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        xor_sum ^= a;
    }
    
    if (n % 2 != 0) {
        // If n is odd, x = total XOR sum always works
        cout << xor_sum << "
";
    } else {
        // If n is even, it's only possible if initial XOR sum is 0
        if (xor_sum == 0) {
            cout << 0 << "
";
        } else {
            cout << -1 << "
";
        }
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