#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        int total2 = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
 
            if (a[i] == 2)
                total2++;
        }
 
        // Only 1s
        if (total2 == 0) {
            cout << 1 << endl;
            continue;
        }
 
        // Odd number of 2s
        if (total2 % 2 != 0) {
            cout << -1 << endl;
            continue;
        }
 
        int need = total2 / 2;
        int count2 = 0;
 
        for (int i = 0; i < n; i++) {
            if (a[i] == 2) {
                count2++;
 
                if (count2 == need) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
 
    return 0;
}