// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while (t--)
    {   
        vector<ll> v;
        ll n,x,inp,n_z=0,n_o=0;
        cin>>n>>x;
        while (n--)
        {
            cin>>inp;
            v.push_back(inp);
            if(inp == 0)
            {
                n_z++;
            }
            else
            {
                n_o++;
            }
            
        }
        ll count = 0;
        ll bal = n_z-n_o;
        // if(x%bal == 0)
        // {
        //     count++;
        // }
        ll min = ceil(x/bal-1);
        ll diff;
        for(int i =0; i < v.size(); i++)
        {

        }

        
    }
    

    return 0;
}