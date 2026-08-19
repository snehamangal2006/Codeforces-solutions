#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int max_len = 1;
    int current_len = 1;
 
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            current_len++;
        } else {
            current_len = 1;
        }
        max_len = max(max_len, current_len);
    }
 
    cout << max_len + 1 << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}