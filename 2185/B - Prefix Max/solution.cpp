#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int maxi=INT_MIN;
	    int arr[n];
	    int result=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>maxi){
	            maxi=arr[i];
	        }
	    } 
	      result=maxi*n;
	      cout<<result<<endl;
 
	
	} return 0;
}