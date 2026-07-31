#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,c,k;
        cin>>n>>c>>k;
        
        long long arr[n];
        
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        
        if(c<arr[0])
        {
            cout<<c<<"
";
            continue;
        }
        
        
        for(long long i=0; i<n; i++)
        {
            if(c<arr[i])
            {
                break;
            }
            long long diff = c-arr[i];
            if(diff==0)
            {
                c = c + arr[i];
            }
            else if(k>=diff && c>arr[i])
            {
                c = c + diff + arr[i];
                k = k - diff;
            }
            else if(k<diff && c>arr[i])
            {
                c = c + arr[i] + k;
                k = 0;
            }
            else if(c>arr[i])
            {
                c = c + arr[i];
            }
            
        }
        
        cout<<c<<"
";
    }
}