// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;
ll xr = 0;
ll cnt=0,k;
ll i =1;
queue<ll> q;
vector<ll> dp[100002];

ll dfs(ll s,vector<ll> adj[],bool visited[],ll parent)
{
    visited[s] = true;
    // xr=s;
    q[i].push(s);
    for(auto u:q[parent])

    if(!(xr^k))
        cnt++;
    
    
    for(auto u: adj[s])
    {
        if(!visited[u])
        {
            xr^=dfs(u,adj,visited,s);
        }
    }
    
    
    return cnt;
}



int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,x;cin>>n>>k;
    vector<ll> u,v;
    u.push_back(-1);
    // v.push_back(-1);

    for(ll i=0; i <n;i++)
    {
        cin>>x;
        u.push_back(x);
    }
    for(ll i =0;i<n-1;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    vector<ll> adj[n+1];

    for(ll i = 2; i <=n; i++)
    {
        ll a = u[i];
        ll b = u[v[i-1]];
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    bool visited[n+1];
    memset(visited,false,n+1);
    ll ans = bfs(1,adj,visited);
    cout<<cnt;
    return 0;
}