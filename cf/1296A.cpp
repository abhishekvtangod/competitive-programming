// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define as(n,a,b) assert(a<=n && n<=b);
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    
    while(t--)
    {
        ll x;
        cin>>x;
        vector<ll> v;
        ll s_even  = 0,s_odd=0;
        while (x--)
        {
            ll inp;cin>>inp;
            v.push_back(inp);
            if(inp%2 != 0)
            {
                s_odd++;
            }
            else
            {
                s_even++;
            }
            
        }
        if(s_even == v.size())
        {
            cout<<"NO\n";
        }
        else if (v.size()%2==0)
        {
            if(s_odd == v.size())
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
            
        }
        else if (v.size()%2)
        {
            cout<<"YES\n";
        }
        
        

        // cout<<s_even<<" "<<s_odd<<endl;
    }

    return 0;
}