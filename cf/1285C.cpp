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

    ll n;
    cin>>n;
    // vector<pair<ll,ll>> v;
    // vector<ll> a;
    // v.push_back({1,n});
    // a.push_back(n);
    ll mn=n;
    for(ll i= 2;i*i <= n; i++)
    {

        if((n%i==0) && (n%(n/i)==0) && (i != n/i) && (gcd(i,n/i) == 1))
            mn=min(mn,max(i,n/i));
            // v.push_back({i,n/i});
    }
    // sort(a.begin(),a.end());
    // for(ll i =0; i< a.size(); i++)
        // cout<<n/(*a.begin())<<" "<<*a.begin();
        // cout<<v[i].first<<"->"<<v[i].second<<endl;
    cout<<n/(mn)<<" "<<mn;
    

    return 0;
}