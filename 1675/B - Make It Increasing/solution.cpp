#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int ans = 0;
 
        // Start from the second last element
        for (int i = n - 2; i >= 0; i--) {
 
            // Make a[i] smaller than a[i+1]
            while (a[i] >= a[i + 1] && a[i] > 0) {
                a[i] /= 2;
                ans++;
            }
 
            // Still not smaller -> impossible
            if (a[i] >= a[i + 1]) {
                ans = -1;
                break;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}