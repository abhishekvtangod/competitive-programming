// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)    
    {   ll c,sum;
        cin>>c>>sum;
        ll remain = sum % c;
        ll each = (sum/c);

        ll all_equal = (each*each) * (c-remain);
        ll addnl = ((each+1)*(each+1))*(remain);
        cout<<all_equal+addnl<<endl;
    }
    return 0;
}