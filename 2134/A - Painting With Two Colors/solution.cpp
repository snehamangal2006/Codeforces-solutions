#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
 
        if (a <= b) {
            if ((n % 2) == (b % 2))
                cout << "YES
";
            else
                cout << "NO
";
        } else {
            if ((n % 2) == (a % 2) && (n % 2) == (b % 2))
                cout << "YES
";
            else
                cout << "NO
";
        }
    }
 
    return 0;
}