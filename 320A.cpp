// QUESTION LINK:
// https://codeforces.com/problemset/problem/320/A

/* n.find() helps find a substring; 
 and when its not there, it returns stringName.npos
 which is the maximum value for an iterator 
 position in a string */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    string n;
    cin>>n;
    bool ans = true;
    for(int i = 0; i < (int)n.size()  ; i++)
    if(n[i] != '1' && n[i] != '4') ans = false;

    if(n[0] == '4') ans = false;

    if(n.find("444") != n.npos) ans = false;
    
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}