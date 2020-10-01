// Lucky Division
/* SRC: Check if N is divisible by a number which is composed of the 
 digits from the set {A, B} @ GFG*/

#include<bits/stdc++.h>
using namespace std;

bool isDivisible(int x, int a, int b, int n)
{
    //base cases
    if( x > n ) return false;
    if( n % x == 0 ) return true;

    //recursive call
    return (isDivisible(x*10 +a,a,b,n)||isDivisible(x*10 +b,a,b,n));

}

bool isdiv(int a, int b, int n)
{
    return isDivisible(a,a,b,n) || isDivisible(b,a,b,n);
} 


int main()
{
   
int n;
cin>>n;
if(isdiv(4,7,n)) cout<<"YES";
else cout<<"NO";

}