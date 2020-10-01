#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
int main()
{
    ll n,k,i,j,l=0;
    cin>>n>>k;
    
    if(n%2==0)
    {
        if(k<=n/2)
          {
              cout<<(2*k-1);
		      return 0;
          }
          else
          {
              cout<<(2*k-n);
              return 0;
          }          
    } 
    else
    {
        if(k<=(n+1)/2)
          {
              cout<<(2*k-1);
		      return 0;
          }
          else
          {
              cout<<(2*k-n-1);
              return 0;
          }  
    }
    
}