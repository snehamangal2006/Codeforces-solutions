#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int arr[n];
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        int count = 0;  // number of -1
 
        for (int i = 0; i < n; i++) {
            if (arr[i] == -1) {
                count++;
            }
        }
 
        int count2 = n - count;  // number of 1
        int ans = 0;
 
        while (count > count2 || count % 2 != 0) {
            count--;
            count2++;
            ans++;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}