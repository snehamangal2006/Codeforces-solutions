#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,c,k;
    cin>>n>>c>>k;
    long long arr[n];
    int sum=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
      sum+=arr[i];
  }  if(sum==c) cout<<"YES"<<endl;
     else if(sum>c) cout<<"NO"<<endl;
    else{
        int d = c-sum;
    if(d%k==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    } 
} return 0;
}