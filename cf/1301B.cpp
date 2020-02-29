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
        ll mx,mn;
        for(ll i =0; i < n ;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        set<ll> s;
        for(ll i = 1; i < n-1; i++)
        {
            if(v[i] == -1)
            {
                if(v[i+1] != -1)
                {
                    s.insert(v[i+1]);
                }
                if(v[i-1] != -1)
                {
                    s.insert(v[i-1]);
                }

            }
        }
        if(v[0] == -1 && v[1] != -1)
            s.insert(v[1]);
        if(v[n-1] == -1 && v[n-2] != -1)
            s.insert(v[n-2]);
        if(!s.empty())
        {mn = *s.begin();
        mx = *s.rbegin();
        }// cout<<mn<<" "<<mx;
        else
        {
            mn=0;mx=0;
        }
        
        ll k = (mn+mx)/2;

        for(ll i =0; i < n; i++)
        {
            if(v[i] == -1)
                v[i] = k;
        }
        vector<ll> diff;
        for(ll i =0; i < n-1; i++)
        {
            diff.push_back(abs(v[i]-v[i+1]));
        }
        sort(diff.begin(),diff.end());
        // for(ll i =0; i < n-1; i++)
        // {
        //     cout<<diff[i]<<" ";
        // }
        cout<<*diff.rbegin()<<" "<<k<<endl;
    }
    
    

    return 0;
}