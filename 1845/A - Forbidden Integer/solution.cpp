#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
 
        // Case 1: 1 is available
        if (x != 1) {
            cout << "YES
";
            cout << n << "
";
 
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout << "
";
        }
 
        // Case 2: 1 is forbidden
        else {
            // Only number available is 2
            if (k == 1) {
                cout << "NO
";
            }
            // n is even -> use only 2s
            else if (n % 2 == 0) {
                cout << "YES
";
                cout << n / 2 << "
";
 
                for (int i = 0; i < n / 2; i++) {
                    cout << 2 << " ";
                }
                cout << "
";
            }
            // n is odd -> need 3 + 2 + 2 + ...
            else {
                if (k >= 3) {
                    cout << "YES
";
                    cout << (n - 3) / 2 + 1 << "
";
 
                    cout << 3 << " ";
 
                    for (int i = 0; i < (n - 3) / 2; i++) {
                        cout << 2 << " ";
                    }
                    cout << "
";
                }
                else {
                    cout << "NO
";
                }
            }
        }
    }
 
    return 0;
}