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

    ll t;cin>>t;
    while (t--)
    {
        string a,b;cin>>a>>b;
        ll l = min(a.size(),b.size());
        ll ans =0;
        ll al,bl;
        al = a.size();
        bl = b.size();
        ans+= abs(al-bl);
        for(ll i =0 ; i<l;i++)
        {
            if(a[i] != b[i])
                ans++;
        }
        cout<<ans;
    }
    

    return 0;
}