//QUESTION LINK
//https://codeforces.com/problemset/problem/447/B
//GREEDY

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    string s;
    int k;
    unordered_map<char,int> w(26);
    cin>>s;
    cin>>k;
    int max = 0;
    char j;
    for(int i = 0; i < 26 ; i++) 
    {
        cin>>w['a' + i ];

    }
    for(auto i = w.begin(); i != w.end() ; i++)
    {
        if(i->second > max) {max = i->second; j = i->first;} 
    }

    for(int i = 0; i < k ; i++)
    {
        s.push_back(j);
    }

    int sum =0;
    for(int k = 0; k < s.size() ; k++)
    {
        sum += w[s[k]]*(k+1);
    }

    cout<<sum<<endl;



    
}