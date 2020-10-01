//keyboard
#include<bits/stdc++.h>
using namespace std;


int main(){
    string ref = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char n;
    string x;
    unordered_map<char,char> rightchars;
    unordered_map<char,char> leftchars;

    for(int i = 0; i < ref.size()-1 ; i++)
    {
        rightchars[ref[i]] = ref[i+1];
    }
    for(int i = 1; i < ref.size() ; i++)
    {
        leftchars[ref[i]] = ref[i-1];
    }

    cin>>n;
    cin>>x;

    if(n=='R')
    {
        for(int i = 0; i < x.size() ; i++)
        {
            cout<<leftchars[x[i]];
        }
    }
    else 
    {
        for(int i = 0; i < x.size() ; i++)
        {
            cout<<rightchars[x[i]];
        }
    }




   
}