//QUESTION LINK
//https://codeforces.com/problemset/problem/1221/A
//GREEDY
//elegant implementation of hashmaps, if I may say so myself

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

map<int,int> hashmap;

void solve()
{
    int n,x;
    bool result = false;
    hashmap.clear();
    cin>>n;
    for(int i = 0; i < n ; i++) cin>>x,hashmap[x]++;

    for(auto k: hashmap)
        {
            if(k.first>2048) break;
            if(k.first==2048) { result=true; break; }
            if(k.second>1) { hashmap[k.first*2]+=k.second/2; }
        }

    if(result) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}


int main(){

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }    
    
}