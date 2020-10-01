// twins

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    vector<int> coins;
    cin>>n;
    for(int i = 0; i < n ; i++)
    {
        int x;
        cin>>x;
        coins.push_back(x);
    }

    sort(coins.begin(),coins.end(), greater<int>());

    int arrsum = 0;
    for(int i = 0; i < n ; i++) 
        arrsum += coins[i];

    int temp = 0;
    int ans = 0;


    for(int i = 0; i < n ; i++)
    {   

        temp += coins[i];
        arrsum -= coins[i];

        if(temp > arrsum) 
        {
            ans = i + 1;
            break;
        }
        

    }


    cout<<ans<<" ";

    
}