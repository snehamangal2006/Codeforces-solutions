#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        // Number of groups/runs in original string
        int runs = 1;
 
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                runs++;
        }
 
        int ans = runs;
 
        // Delete s[i], where i cannot be first or last
        for (int i = 1; i < n - 1; i++) {
 
            int oldEdges = 0;
            int newEdges = 0;
 
            // Before deletion
            if (s[i] != s[i - 1])
                oldEdges++;
 
            if (s[i] != s[i + 1])
                oldEdges++;
 
            // After deletion
            if (s[i - 1] != s[i + 1])
                newEdges++;
 
            int newRuns = runs - oldEdges + newEdges;
 
            ans = min(ans, newRuns);
        }
 
        cout << ans << '
';
    }
 
 
 
 
    return 0;
}