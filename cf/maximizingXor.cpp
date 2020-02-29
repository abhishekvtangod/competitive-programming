#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>   
typedef long long ll;

using namespace std;
main()
{
    ll a,b;
    cin>>a>>b;

    int xr = a^b;
    ll count = 0;
    while (xr)
    {
        count++;
        xr >>= 1;   
    }
    xr=0;
    for(int i = 0; i < count; i++)
    {
        xr+=pow(2,i);
    }
    cout<<xr;
    

}