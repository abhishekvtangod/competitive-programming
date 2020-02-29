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
        ll n,x,m;
        cin>>n>>m;
        vector<ll> a,p;
        for(ll i =0; i < n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(ll i =0; i < m;i++)
        {
            cin>>x;
            p.push_back(x-1);
        }
        sort(p.begin(),p.end());

        for(ll i = 0; i < p.size();i++)
        {
            for(auto it=p.begin(); it != (p.end());it++)
            {
                if(*it<n-1 &&  a[*it] > a[(*it)+1])
                {
                    ll ind = (*it);
                    ll ind_one = ((*it)+1);
                    // swap(a[ind],a[ind_one]);
                    
                    swap(a[*it] , a[(*it)+1]);
                    // cout<<a[*it] <<" "<< a[(*it)+1]<<endl;
                }

            }
        }
        ll flag = 0;
        for(ll i=0;i<a.size()-1;i++)
            if(a[i] > a[i+1])
            {
                flag = 1;
                break;
            }

        if(!flag)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
        // cout<<endl;
    
    }
       

    return 0;
}