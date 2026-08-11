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
 
        sort(arr, arr + n);
 
        vector<int> b;
 
        int i = 0;
        int j = n - 1;
 
        while (i <= j) {
            if (i == j) {
                b.push_back(arr[i]);
            } else {
                b.push_back(arr[j]);
                b.push_back(arr[i]);
            }
 
            i++;
            j--;
        }
 
        int sum = 0;
        bool found = true;
 
        for (int i = 0; i < n; i++) {
 
            // Check BEFORE adding current element
            if (sum == b[i]) {
                found = false;
                break;
            }
 
            sum += b[i];
        }
 
        if (!found) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
 
            for (int x : b) {
                cout << x << " ";
            }
 
            cout << endl;
        }
    }
    return 0;
}