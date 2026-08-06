#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        map<int, int> mp;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
 
        if (mp.size() == 1) {
            cout << "YES
";
        }
        else if (mp.size() == 2) {
            vector<int> freq;
            for (auto x : mp)
                freq.push_back(x.second);
 
            int odd = (n + 1) / 2;
            int even = n / 2;
 
            if ((freq[0] == odd && freq[1] == even) ||
                (freq[0] == even && freq[1] == odd))
                cout << "YES
";
            else
                cout << "NO
";
        }
        else {
            cout << "NO
";
        }
    }
 
    return 0;
}