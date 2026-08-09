#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int arr[n];
 
        for (int i = 0; i < n; i++)
            cin >> arr[i];
 
        vector<int> b;
 
        for (int i = 0; i < n; i++) {
            b.push_back(n + 1 - arr[i]);
            cout << b[i] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}