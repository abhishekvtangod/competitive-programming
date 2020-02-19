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

    ll n; cin>>n;
    string s[n];
    for(ll i= 0; i < n; i++)
    {   ll flag=1;
        cin>>s[i];
        for(ll j = 0; j < i; j++)
        {
            if(s[i] == s[j])
            {   flag = 0;
                cout<<"YES\n";
                break;
            }
            
        }
        if(flag)
        {
                cout<<"NO\n";
             
        }
    }
    

    return 0;
}