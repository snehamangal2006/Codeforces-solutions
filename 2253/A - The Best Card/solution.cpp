#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i * 1LL * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isPrime(n + 1)) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}