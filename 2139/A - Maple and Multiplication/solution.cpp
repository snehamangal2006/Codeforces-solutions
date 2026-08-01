#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int count=0;
	    if(a>b){
	        if(a%b==0) count=1;
	        else count=2;
	    } else if(b>a) {
	        if(b%a==0) count=1;
	        else count=2;
	    } else {
	        count=0;
	   }  cout<<count<<endl;
	  
	} return 0;
}