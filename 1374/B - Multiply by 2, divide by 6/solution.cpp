#include <iostream>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    
    int cnt2 = 0, cnt3 = 0;
    
    while (n % 2 == 0) {
        cnt2++;
        n /= 2;
    }
    while (n % 3 == 0) {
        cnt3++;
        n /= 3;
    }
    
    // n must be reduced to 1, and power of 3 must be >= power of 2
    if (n != 1 || cnt2 > cnt3) {
        cout << -1 << "
";
    } else {
        cout << (cnt3 - cnt2) + cnt3 << "
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