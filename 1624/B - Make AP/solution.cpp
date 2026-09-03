#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
 
        // Multiply a
        if (2 * b - c > 0 && (2 * b - c) % a == 0) {
            cout << "YES
";
        }
 
        // Multiply b
        else if ((a + c) % (2 * b) == 0) {
            cout << "YES
";
        }
 
        // Multiply c
        else if (2 * b - a > 0 && (2 * b - a) % c == 0) {
            cout << "YES
";
        }
 
        else {
            cout << "NO
";
        }
    }
 
    return 0;
}