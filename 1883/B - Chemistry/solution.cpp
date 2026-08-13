#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        int freq[26] = {0};
 
        // Count frequency of each character
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
 
        // Count characters having odd frequency
        int odd = 0;
 
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                odd++;
            }
        }
 
        // We can delete k characters
        if (odd <= k + 1) {
            cout << "YES
";
        }
        else {
            cout << "NO
";
        }
    }
 
    return 0;
}