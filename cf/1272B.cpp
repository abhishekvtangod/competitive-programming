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
        string s;
        cin>>s;
        
        map<char,ll> mp;    

        for(ll i =0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        ll x = min(mp['L'], mp['R']);
        ll y = min(mp['U'], mp['D']);

        if( x == 0 && y == 0)
        {
            cout<<"0\n";
        }
        else if (x == 0 || y == 0)
        {
            cout<<"2\n";
            if(x == 0)
                cout<<"UD\n";
            else
            {
                cout<<"LR\n";
            }
            
        }
        else
        {
            cout<<2*x+2*y<<endl;
            for(ll i = 0; i < x; i++)
            {
                cout<<"L";
            }
            for(ll i = 0; i < y; i++)
            {
                cout<<"U";
            }for(ll i = 0; i < x; i++)
            {
                cout<<"R";
            }for(ll i = 0; i < y; i++)
            {
                cout<<"D";
            }
            cout<<endl;

        }
        
        


    }
    

    return 0;
}