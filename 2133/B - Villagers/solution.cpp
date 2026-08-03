#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        sort(a.begin(), a.end());
 
        long long ans = 0;
 
        for (int i = n - 1; i >= 0; i -= 2)
            ans += a[i];
 
        cout << ans << '
';
    }
 
    return 0;
} 