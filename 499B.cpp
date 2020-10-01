// QUESTION LINK:
//https://codeforces.com/problemset/problem/499/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    unordered_map<string,string> hashmap;
    vector<string> input;
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < m ; i++)
    {
        string x,y;
        cin>>x>>y;
        hashmap[x] = y;
    }

    for(int i = 0; i < n ; i++)
    {
        string x;
        cin>>x;
        input.push_back(x);
    }

    for(int i = 0; i < n ; i++)
    {
        if( input[i].size() > hashmap[input[i]].size())
        cout<<hashmap[input[i]]<<" ";
        else 
        cout<<input[i]<<" ";
    }


}