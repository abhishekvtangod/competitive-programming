// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    // ios::sync_with_stdio(false); 
    // cin.tie(nullptr);

    ll t;cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> v,a;
        while (n--)
        {
            ll inp;cin>>inp;
            v.push_back(inp);
        }

        if(v.size() == 1 )
        {    
            cout<<"Yes\n";
        }
        else if (v.size() == 2)
        {
            if(v[0] == 0 && v[1] == 0 )
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
        else
        {   ll flag=0;
            n = v.size()/2;
            ll x =0 ;
            for(ll i =0; i < v.size()/2;i++)
            {
                a.push_back(x); 
                x++;
            }
            if(v.size() %2)
                a.push_back(x);    
            for(ll i =0; i < v.size()/2;i++)
            {
                x--;
                a.push_back(x);
                
            }
            for(ll i =0; i < v.size();i++)
            {
                if(!(v[i] >= a[i]))
                {
                    flag=1;
                    cout<<"NO\n";
                    break;
                }
            }
            
            if(!flag)
            cout<<"YES\n";
        }
        

        
    }
    

    return 0;
}