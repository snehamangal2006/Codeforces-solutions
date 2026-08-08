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
int parityyy=0;
for(int i=0;i<n;i++) {
    cin>>arr[i];
    if(arr[i]%2!=0){
        parityyy++;
    } 
} if(   parityyy % 2 ==0     ){
    cout<<"YES"<<endl;
} else cout<<"NO"<<endl;
} return 0;
}