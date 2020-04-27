// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

void showpq(priority_queue <ll> gq) 
{ 
    priority_queue <ll> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.top(); 
        g.pop(); 
    } 
    cout << '\n'; 
} 

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    for(ll tt = 1;tt <= t; tt++)
    {

        priority_queue<ll> pq;
        vector<ll> v;
        ll n,x,k;
        cin>>n>>k;
        while (n--)
        {
            cin>>x;
            v.push_back(x);
        }
        
        for(ll i =1; i < v.size();i++)
        {
            pq.push(v[i]-v[i-1]);
        }
        // ll cnt=0;
        for(ll i =1; i <=k; i++)
        {
            // showpq(pq);
    
            ll a = pq.top();pq.pop();
            // showpq(pq);
            // cout<<a<<endl;
            pq.push(ceil(a/2.0));
            // showpq(pq);

            pq.push(floor(a/2.0));
            // showpq(pq);

        }
        ll ans = pq.top();
        cout<<"Case #"<<tt<<": "<<ans<<'\n';
        

    }

    return 0;
}