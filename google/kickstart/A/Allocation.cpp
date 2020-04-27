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
        for(ll tt = 1;tt <= t; tt++)
        {
            ll n,b;
            cin>>n>>b;
            vector<ll> v;
            ll x;
            for(ll i=0;i<n;i++)
            {
                cin>>x;
                v.push_back(x);
            }
            sort(v.begin(),v.end());
            ll cost = 0;
            ll houses = 0;
            for(auto it=v.begin();it != v.end();it++)
            {
                if(cost+(*it) >b)
                    break;
                cost+=*it;
                houses++;
            }
            cout<<"Case #"<<tt<<": "<<houses<<'\n';




        }
        

        return 0;
    }