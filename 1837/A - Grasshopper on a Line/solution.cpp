#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int  k, x;
        cin >> x >> k ;
if(x%k!=0){
    cout<<1<<endl;
    cout<<x<<endl;
} else {
    int i=0;
    int j=x-1;
    while(i<=j){
        if(i%k!=0 && j%k!=0 && i+j==x){
            cout<<2<<endl;
            cout<<i<<" "<<j<<endl;
            break;
        } else if(i%k==0) {
            i++;
        } else j--;
    }
}
 
 
    }
 
    return 0;
}