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

    ll n,x,o=0,e=0;
    cin>>n;
    vector<ll> v;
    for(ll i =0; i<n;i++)
    {
        cin>>x;
        if(x%2)
            o++;
        else
        {
            e++;
        }
        v.push_back(x);
    }
    // cout<<o<<" "<<e<<" "<<n<<endl;
    if((o == n) || (e == n))
    {    for(ll i = 0; i < v.size();i++)
            cout<<v[i]<<" ";
        return 0;
    }
    sort(v.begin(),v.end());
    for(ll i = 0; i < v.size();i++)
        cout<<v[i]<<" ";

    return 0;
}