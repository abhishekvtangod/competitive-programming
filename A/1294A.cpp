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

    int t;cin>>t;
    while (t--)
    {
        ll a,b,c,n;
        cin>>a>>b>>c>>n;

        vector<ll> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        a = v[0];
        b = v[1];
        c = v[2];
        
        n-=c-a;
        n-=c-b;

        if(n%3 == 0 && n>=0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        

    }
    


    return 0;
}