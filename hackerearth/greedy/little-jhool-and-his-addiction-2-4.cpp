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
        ll inp,N,k;cin>>N>>k;
        vector<ll> n;
        for(ll i =0; i < N; i++)
        {
            cin>>inp;
            n.push_back(inp);
        }
        sort(n.begin(),n.end());
        vector<ll> pr;
        ll j = N-1;
        for(ll i =0;i < N/2;i++,j--)
        {
            pr.push_back(n[i]+n[j]);
        }
        sort(pr.begin(),pr.end());
        ll ans= (*pr.rbegin())-(*pr.begin());
        if(ans < k)
        {
            cout<<ans<<"\nChick magnet Jhool!\n";
        }
        else if (ans == k)
        {
            cout<<ans<<"\nLucky chap!\n";
            

        }
        else
        {
            cout<<ans<<"\nNo more girlfriends!\n";
            
        }
        
        
        
        
    }
    


    return 0;
}