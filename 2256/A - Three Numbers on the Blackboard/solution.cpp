#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        long long a,b,c;
        cin >> a >> b >> c;
 
        long long sum = a+b+c;
        long long sum1 = 0;
 
        long long p = max(a,max(b,c));
        long long n = sum - p;
 
        if(p > n) {
            sum1 = n - min(a,min(b,c));
            cout << sum1 << endl;
        } 
        else {
            sum1 = p - min(a,min(b,c));
            cout << sum1 << endl;
        }
    }
 
    return 0;
}