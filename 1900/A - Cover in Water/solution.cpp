#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int maxGroup = 0;
        int sum = 0;
 
        for (int i = 0; i < n; ) {
            if (s[i] == '.') {
                int len = 0;
                while (i < n && s[i] == '.') {
                    len++;
                    i++;
                }
                maxGroup = max(maxGroup, len);
                sum += len;
            } else {
                i++;
            }
        }
 
        if (maxGroup >= 3)
            cout << 2 << "
";
        else
            cout << sum << "
";
    }
 
    return 0;
}