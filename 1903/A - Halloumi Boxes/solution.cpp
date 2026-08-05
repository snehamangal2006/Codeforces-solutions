#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> arr(n), b;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        if (k > 1) {
            cout << "YES
";
        } else {
            b = arr;
            sort(b.begin(), b.end());
 
            if (arr == b)
                cout << "YES
";
            else
                cout << "NO
";
        }
    }
 
    return 0;
}