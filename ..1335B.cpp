// QUESTION LINK
// https://codeforces.com/problemset/problem/1335/B

/* i % b is a nice technique - ((seen from editorial))
 way better than extra variables, checks and loops 
 the test cases are exclusively there to befuddle*/ 
/*keep the modulus technique in handy, when you want 
something to repeat over and over again.*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        for(int i = 0; i < n ; i++)
        {
             cout<<char('a' + i % b);
        }
        cout<<endl;

    }
    
}