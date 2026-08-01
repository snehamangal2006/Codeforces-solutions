#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n + 1), pref(n + 1, 0);
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }
 
        bool found = false;
 
        for (int l = 1; l <= n - 2 && !found; l++) {
            for (int r = l + 1; r <= n - 1; r++) {
 
                int s1 = pref[l] % 3;
                int s2 = (pref[r] - pref[l]) % 3;
                int s3 = (pref[n] - pref[r]) % 3;
 
                if ((s1 == s2 && s2 == s3) ||
                    (s1 != s2 && s2 != s3 && s1 != s3)) {
 
                    cout << l << " " << r << "
";
                    found = true;
                    break;
                }
            }
        }
 
        if (!found)
            cout << "0 0
";
    }
 
    return 0;
}