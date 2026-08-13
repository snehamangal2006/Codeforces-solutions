#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    long long n,a,b;
    cin>>n>>a>>b;
    long long minimum= a*(a+1)/2;
    long long maximum = a*(2*n-a+1)/2;
    if(b>=minimum && b<=maximum){
        cout<<"YES"<<endl;
    } else cout<<"NO"<<endl;
    
}return 0;
}