#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b;
        cin >> a >> b;
 
        // Difference between a and b never changes
        long long d = abs(a - b);
 
        // If a == b, GCD can become infinitely large
        if (d == 0) {
            cout << "0 0
";
            continue;
        }
 
        // Remainder when a is divided by d
        long long r = a % d;
 
        // Minimum moves: either decrease by r
        // or increase by (d-r)
        long long moves = min(r, d - r);
 
        cout << d << " " << moves << "
";
    }
 
    return 0;
}