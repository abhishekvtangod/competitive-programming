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
    ll n,k,x;
    cin>>n>>k;
    vector<ll> a,b;
    for(ll i =0; i  < n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(ll i =0; i  < n; i++)
    {
        cin>>x;
        b.push_back(x);
    }
    vector<tuple<ll,ll,ll>> tu;
    for(ll i =0 ; i <n; i++)
    {
        tu.push_back({a[i]-b[i],a[i],b[i]});
    }

    sort(tu.begin(),tu.end());

    ll sum = 0;
    for(ll i = 0; i < n; i++)
    {
        // sum += ((i < k)*(get<1>(tu[i])));
        // sum += get<1>(tu[i]) - ((i>=k && (get<0>(tu[i])>0))*get<0>(tu[0]));
        // +((i >= k && (get<0>(tu[i])>0 )))
        if(get<0>(tu[i]) < 0)
            sum+=get<1>(tu[i]);
        else
        {
            if(i >= k) 
                sum+=get<2>(tu[i]);
            else
            {
                sum+=get<1>(tu[i]);
            }
            
        }
        
    }

    cout<<sum<<endl;
    return 0;
}