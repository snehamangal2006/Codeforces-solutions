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
for(int i=0;i<n;i++){
    cin>>arr[i];
} int mini=INT_MAX;
bool found=true;
for(int i =0 ;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        found=false;
        break;
    }
} if(!found) {
    cout<<0<<endl;
    continue;
}
 for(int i=1;i<n;i++){
     int ans=arr[i]-arr[i-1];
     mini = min(mini,ans);
 } int result = mini/2 ;
 cout<<result+1<<endl;
 
} return 0;
}