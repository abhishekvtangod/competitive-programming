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

            vector<string> v;
            ll n,k;
            cin>>n>>k;
            string s;
            for(ll i = 0;i < n; i++)
            {
                cin>>s;
                v.push_back(s);
            }
            sort(v.begin(),v.end());
            for(ll i = 0;i < n; i++)
            {
                cout<<v[i]<<endl;
                
            }


            // cout<<"Case #"<<tt<<": "<<houses<<'\n';




        }
        

        return 0;
    }