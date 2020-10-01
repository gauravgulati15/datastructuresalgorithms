//pillars
// newsflash: arrays are faster as compared to vectors as they are lower level
//Very Importnat Question

#include<bits/stdc++.h>
 
using namespace std;
 
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
 
/// Typedef
typedef long long ll;
 
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
 
#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

//////////////////////////////////////////////////

int main()
{

    int num;

    sc1(num);
 
    ll arr[num];
 
    ll mxx = 0, pos = 0;
    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
        if(arr[i] > mxx) mxx = arr[i], pos = i;
    }
 
    for(ll i = pos; i < num - 1; i++){
        if(arr[i] < arr[i + 1])
            return cout << "NO" << endl,0;
    }
 
    for(ll i = pos; i > 0; i--){
        if(arr[i] < arr[i - 1])
            return cout << "NO" << endl,0;
    }
 
    cout << "YES" << endl;

}








