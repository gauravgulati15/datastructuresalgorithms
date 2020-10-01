#include<bits/stdc++.h>
using namespace std;

int main(){

    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> drags; 
    for(int i = 0; i < n ; i++)
    {
        int a,b;
        cin>>a>>b;
        drags.push_back(make_pair(a,b));

    }
    bool result = true;

    sort(drags.begin(),drags.end());
    for(int i = 0; i < n ; i++)
    {
        if(s>drags[i].first)
          s+=drags[i].second;
        else {result = false; break;}  
    }
    if(result == true) cout<<"YES";
    else cout<<"NO";

} 