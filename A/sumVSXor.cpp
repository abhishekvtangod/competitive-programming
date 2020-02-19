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
    ll n,c=0;
    cin>>n;
    while (n)
    {
        if(n%2 == 0)
            c++;
        // n/=2;

        n >>= 1 ;


    }
    // cout<<c;
    cout<<pow(2,c);
}