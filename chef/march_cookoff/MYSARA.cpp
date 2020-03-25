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
            ll n,x;cin>>n;
            vector<ll> v;
            for(ll i=0; i<n;i++)
            {
                cin>>x;
                v.push_back(x);
            }
            ll ans=1;
            for(ll i =0; i < n-1 ; i++)
            {   
                ll a= v[i];
                ll b = v[i+1];
                // ll minSetBit = min(log2(a),log2(b));
                ll cnt=0;
                if((a|b) != b)
                    ans=0;
                while (a&b)
                {
                    if(((1&a)&(1&b)))
                    {

                        // cout<<"---"<<cnt<<" "<<a<<" "<<b<<endl;

                        cnt++;
                    }
                    a/=2;b/=2;

                }      
                // cout<<cnt<<"--\n";
                    ans*=pow(2,cnt);
                    ans%=mod;

            }   
            cout<<ans%mod<<endl;
        }
        

        return 0;
    }