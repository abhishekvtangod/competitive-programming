// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define as(n,a,b) assert(a<=n && n<=b);
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (((a)*(b))/(__gcd(a,b)))
typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,m;cin>>n>>m;
    vector<ll> a;
    vector<ll> b;
    ll inp,a_lcm=1,b_gcd;
    while (n--)
    {
        cin>>inp;
        a.push_back(inp);
        a_lcm=lcm(a_lcm,inp);
    }

            cin>>inp;
            b.push_back(inp);
            m--;
        if(m)
        {    cin>>inp;
            b.push_back(inp);
            m--;
            b_gcd = gcd(b[0],b[1]);
        }
        else
        {
            b_gcd = inp;
        }
            
    while (m--)
    {
        cin>>inp;
        b.push_back(inp);
        b_gcd=gcd(b_gcd,inp);
        
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll cnt = 0;
    for(ll i = a_lcm;i<=b_gcd; i+=a_lcm)
    {
        if(b_gcd%i == 0)
        {
            cnt++;
        }
    }
    // cout<<a_lcm<<" "<<b_gcd<<endl;
    cout<<cnt;
    return 0;
}