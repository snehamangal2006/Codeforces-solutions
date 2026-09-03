#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        map<long long, int> mp;
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            mp[x]++;
        }
 
        int mx = 0;
 
        for (auto x : mp) {
            mx = max(mx, x.second);
        }
 
        int ans = 0;
 
        while (mx < n) {
            ans++;  // clone
 
            int add = min(mx, n - mx);
 
            ans += add;  // swaps
            mx += add;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}