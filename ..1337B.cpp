//QUESTION LINK
//https://codeforces.com/contest/1337/problem/B
/* the hit point stops decreasing after some VAs;
  for example if it is equal to 20. 
  so cast all VAs first, and if remaining LS's are enough, you win. */

//using void solve is a good technique. implement it in the future

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int x,n,m,t;
    cin>>t;
    while(t--)
    {
    cin>>x>>n>>m;
    while (x>0 && n && x/2+10 < x )
    {
        n-=1;
        x=x/2+10;
    }
    if (x<=m*10) cout<<"YES"<<endl;
	else cout<<"NO"<<endl; 
    }

}