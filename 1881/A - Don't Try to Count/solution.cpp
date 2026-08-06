#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        string x, s;
        cin >> x >> s;
 
        if (x.find(s) != string::npos) {
            cout << 0 << endl;
            continue;
        }
 
        int cnt = 0;
        bool found = false;
 
        while (x.size() < s.size()) {
            x += x;
            cnt++;
 
            if (x.find(s) != string::npos) {
                cout << cnt << endl;
                found = true;
                break;
            }
        }
 
        if (!found) {
            x += x;
            cnt++;
 
            if (x.find(s) != string::npos)
                cout << cnt << endl;
            else
                cout << -1 << endl;
        }
    }
 
    return 0;
}