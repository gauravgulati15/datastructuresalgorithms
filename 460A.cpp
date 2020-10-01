//vasya and socks
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int socks = n;
    int day = 1;

    while(socks > 0)
    {
        if(day % m == 0)
        socks++;

        socks--;
        day++;

    }
    cout<<day-1;

}