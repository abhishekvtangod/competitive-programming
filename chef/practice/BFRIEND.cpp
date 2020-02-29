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
    while (t--)
    {
        ll N,x,a,b,c;
        cin>>N>>a>>b>>c;
        vector<ll> f;
        //memoization arrays
        ll dp[N];
        for(ll i= 0; i<N; i++)
        {
            cin>>x;
            f.push_back(x);
            dp[i] = abs(b-x)+abs(a-x);

        }
        sort(dp,dp+N);
        cout<<dp[0]+c<<"\n";
    }

    

    return 0;
}