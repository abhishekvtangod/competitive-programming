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
    while(t--)
    {
        string s;
        cin>>s;ll sum=0;
        for(ll i =0; i < s.size(); i++)
        {
            sum += (s[i]-'a')%5;
        }
        cout<<sum<<endl;
    }

    return 0;
}