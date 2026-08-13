#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    
    int d = s.length();             // Total number of digits
    int first_digit = s[0] - '0';    // Leading digit
    
    // Total extremely round numbers = 9 * (d - 1) + leading digit
    int ans = 9 * (d - 1) + first_digit;
    
    cout << ans << "
";
}
 
int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}