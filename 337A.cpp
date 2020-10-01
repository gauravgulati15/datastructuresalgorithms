#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int d=0;
    cin>>n>>m;
    vector<int> puzz;
    vector<int> diffs;

    for ( int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        puzz.push_back(x);
    }

    sort(puzz.begin(),puzz.end());

    for(int i=0;i+n-1<m;++i)
    {
        d = puzz[i+n-1] - puzz[i];
        diffs.push_back(d);
    }
    
    for( int j = 0; j < diffs.size() ; j++)
    {
        if(d > diffs[j]) d = diffs[j];
    }

    cout<<d;
   
}