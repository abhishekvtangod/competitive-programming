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
    while(t--)
    {
        ll n;cin>>n;
        ll x,mx=0;
        vector<ll> v;
        for(ll i=0; i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            mx = max(mx,x);
        }
        vector<ll> index;
        for(ll i =0; i < n; i++)
        {
            if(v[i] == mx)
            {
                index.push_back(i);
            }
        }
        // cout<<endl;
        ll diff = 0,diff1=0,diff2=0;
        
        if(index.size() >=2)
        {

            diff1 = (*(index.rbegin()))-(*index.begin());
            ll lm=0,rm=0;
            for(ll i =0; i < (n/2); i++)
            {
                if(v[i] == mx)
                {
                    lm = i;
                }
            }
            for(ll i = n/2; i < n; i++)
            {
                if(v[i] == mx)
                {
                    rm=i;break;
                }
            }
            diff2 = v.size()-rm+lm;


        }




        // cout<<"diff: "<<diff<<";";
        diff = min(diff1,diff2);
        // cout<<"diff;"<<diff<<endl;
        if(diff>=(n/2))
            cout<<"0\n";
        else
            cout<<(n/2)-diff<<endl;
        
        // for(auto u:index)
        //     cout<<u<<" ";
        // cout<<endl;

    }

    return 0;
}