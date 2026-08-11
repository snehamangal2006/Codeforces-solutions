#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int a[100];
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        bool found = false;
 
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (__gcd(a[i], a[j]) <= 2) {
                    found = true;
                    break;
                }
            }
 
            if (found)
                break;
        }
 
        if (found)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
 
    return 0;
}