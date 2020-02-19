// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

int palin(string s)
{
    string temp(s.rbegin(),s.rend());
    if(s == temp)
        return 1;
    return 0;
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,m;cin>>n>>m;
    string s[n];
    string ans="",buffer="";
    for(ll i = 0;i < n; i++)
    {
        cin>>s[i];
    }
    ll count = 0;
    ll flag=0;
    for(ll i = 0; i < n-1; i++)
    {   ll temp_f=0;
        for(ll j = i+1; j < n ; j++)
        {
            string temp(s[j].rbegin(),s[j].rend());
            if(s[i] == temp)
            {
                count+=2*m;
                temp_f = 1;
                ans += s[i];
                // cout<<" ---------- "<<ans<<endl;
                break;
            }
            
        }
        if(temp_f == 0)
        { 
            if(palin(s[i]))
            {
                flag = 1;
                buffer = s[i];
            }
        }
    }
    if(palin(s[n-1]))
    {
        flag = 1;
        buffer = s[n-1];

    }
    if(flag == 1)
        count+=m;
    
    cout<<count<<endl;
    cout<<ans<<buffer;
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

    return 0;
}