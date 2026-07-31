#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    bool found = false;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]==67){
            found = true;
        }
    }
     if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
} return 0;
}