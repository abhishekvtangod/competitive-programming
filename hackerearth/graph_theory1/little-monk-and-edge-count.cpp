// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;


//dfs params
bool visited[100002];
ll dp[100001];
vector<ll> adj[100002];
vector<pair<ll,ll>> edges;


ll dfs(ll s)
{
    visited[s]=true;
    ll ans = 1;
    for(auto u: adj[s])
    {
        if(!visited[u])
            ans+=dfs(u);
    }
    dp[s] = ans;
    return dp[s];



}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    ll n,q;
    cin>>n>>q;
    ll u,v;
    for(ll i=0;i < n-1;i++)
    {
        cin>>u>>v;
        edges.push_back({u,v});
        adj[u].push_back(v);
        adj[v].push_back(u);
    }   
    dfs(1);

    // for(ll i =1; i<= n;i++)
    // {
    //     cout<<dp[i]<<" ";
    // }
    cout<<endl;
    ll x;
    for(ll i =0; i < q; i++)
    {
        cin>>x;
        ll a = edges[x-1].first;
        ll b = edges[x-1].second;
        ll total;
        if(dp[a] > dp[b])
        {
            a = n - dp[b];
            b = dp[b];
            // cout<<a<<"->"<<b<<endl;

            total = a*b;
        }
        else
        {
            b = n - dp[a];
            a = dp[a];
            total = a*b;
            // cout<<a<<"->:"<<b<<endl;
        
        }
        cout<<total<<"\n";
        

        
    }



    return 0;
}