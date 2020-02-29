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

    ll n,x;cin>>n;
    vector<ll> v;
    for(ll i =0; i <n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll score=0;
    for(ll i = 0; i <n; i++)
    {
        score += v[i]*(i+2);
    }
    score -= *(v.end()-1);
    cout<<score<<endl;

    return 0;
}