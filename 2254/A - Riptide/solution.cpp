#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    int maxi=INT_MIN;
	    int mini=INT_MAX;
	    cin>>a>>b>>c;
	    int count=0;
	    if(a==b || b==c || c==a){
	        cout<<count;
	    } else {
	        
	        int maxi=max(a,max(b,c));
	        
	        int mini=min(a,min(b,c));
	        int z=a+b+c-maxi-mini;
	         while(mini<maxi){
	         maxi = maxi-1;
	         mini=mini+1;
	         count++;
	         if(maxi==mini || mini==z || maxi==z){
	             break;
	         }
	         } cout<<count; 
	        } cout<<endl;
	} return 0;
}