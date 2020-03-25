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

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;cin>>n;
        ll r,p,s;
        cin>>r>>p>>s;
        string str;cin>>str;
        ll R=0,S=0,P=0;
        for(ll i =0;i<n;i++)
        {
            if(str[i] == 'R')R++;
            if(str[i] == 'P')P++;
            if(str[i] == 'S')S++;
        }
        ll wins = min(r,S)+min(p,R)+min(s,P);
        if(wins>= ceil(n/2.0))
        {
            cout<<"YES\n";
            vector<char> v;
            for(ll i=0;i <n;i++)
                v.push_back('a');
            for(ll i=0;i <n;i++)
            {
                if((str[i] == 'R') && p)
                {
                    v[i] = 'P';
                    p--;
                }
                else if((str[i] == 'P') && s)
                {
                    v[i] = 'S';
                    s--;
                }
                else if((str[i] == 'S') && r)
                {
                    v[i] = 'R';
                    r--;
                }
                
            }
            
            for(ll i =0; i <n;i++)
            {
                if(v[i] == 'a')
                {
                    if(r)
                    {
                        v[i] = 'R';
                        r--;
                    }
                    else if (p)
                    {
                        v[i] = 'P';
                        p--;
                    }
                    else if (s)
                    {
                        v[i] = 'S';
                        s--;
                    }
                    
                    
                }
            }
            for(auto u:v)
                cout<<u;
            cout<<'\n';
                
                

            
        }
        else
        {
            cout<<"NO\n";
        }
        





    }
       

    return 0;
}