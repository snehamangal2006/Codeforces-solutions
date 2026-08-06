#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x=n%3;
	    if(x==1 || x==2){
	        cout<<"First"<<endl;
	    } else cout<<"Second"<<endl;
	} return 0;
 
}