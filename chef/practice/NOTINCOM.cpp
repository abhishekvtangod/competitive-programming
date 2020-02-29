// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a*b)/__gcd(a,b))

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while (t--)
    {
        ll m,n,x;
        cin>>n>>m;
        vector<ll> a,b;
        while (n--)
        {
            cin>>x;
            a.push_back(x);
        }
        while (m--)
        {
            cin>>x;
            b.push_back(x);
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<ll> res;
        set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(res));

        cout<<res.size()<<endl;
        
    }
    
    

    return 0;
}