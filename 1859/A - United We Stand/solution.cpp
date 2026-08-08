#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        int mx = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
 
        vector<int> b, c;
 
        for (int x : a) {
            if (x == mx)
                c.push_back(x);
            else
                b.push_back(x);
        }
 
        if (b.empty() || c.empty()) {
            cout << -1 << '
';
        } else {
            cout << b.size() << " " << c.size() << '
';
 
            for (int x : b)
                cout << x << " ";
            cout << '
';
 
            for (int x : c)
                cout << x << " ";
            cout << '
';
        }
    }
 
    return 0;
}