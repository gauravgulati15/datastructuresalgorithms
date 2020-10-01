// QUESTION LINK
// https://codeforces.com/problemset/problem/567/A
// GREEDY

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    int n;
    cin>>n;
    vector<int> coord(n);
    for(int i = 0; i < n ; i++)cin>>coord[i];
    
    for(int i = 0; i < n ; i++)
    {
        if(i == 0) 
        {
        cout<<abs(coord[i] - coord[i+1])<<" ";
        cout<<abs(coord[i] - coord[n-1])<<endl;
        }
        else if(i == n-1)
        {
        cout<<abs(coord[i] - coord[i-1])<<" ";
        cout<<abs(coord[i] - coord[0])<<endl;
        }
        else 
        {
        int a = abs(coord[i] - coord[i+1]);
        int b = abs(coord[i] - coord[i-1]);
        cout<<min(a,b)<<" ";
        int c = abs(coord[i] - coord[n-1]);
        int d = abs(coord[i] - coord[0]);
        cout<<max(c,d)<<endl;
        }


    }
}