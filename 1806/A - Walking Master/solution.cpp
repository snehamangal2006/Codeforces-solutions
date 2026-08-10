#include <iostream>
 
using namespace std;
 
void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
 
    if (d < b) {
        cout << -1 << "
";
        return;
    }
 
    long long moves = d - b;
    long long new_a = a + moves;
 
    if (c > new_a) {
        cout << -1 << "
";
    } else {
        moves += (new_a - c);
        cout << moves << "
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