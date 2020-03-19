// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

void addEdge(vector<pair<ll,ll>> adj[],ll u,ll v,vector<ll> val)
{
    adj[u].push_back({v,val[v]});
    adj[v].push_back({u,val[u]});
}



int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,e,k;cin>>n>>e>>k;
    vector<ll> val;
    val.push_back(-1);
    ll x;
    for(ll i=0; i <n; i++)
    {
        cin>>x;
        val.push_back(x);
    }
    vector<pair<ll,ll>> adj[n+1];
    ll u,v;
    for(ll i=0; i<e;i++)
    {
        cin>>u>>v;
        addEdge(adj,u,v,val);
    }
    for(ll i=1; i <= n; i++)
    {
        sort(adj[i].begin(),adj[i].end(),[](pair<ll,ll>& p1,pair<ll,ll>& p2)->bool{if(p1.second == p2.second)return p1.first>p2.first; return p1.second > p2.second;});

    
    }
    for(ll i = 1; i <=n ; i++)
    {
        if(k-1 <adj[i].size())
            cout<<adj[i][k-1].first<<'\n';
        else
        {
            cout<<-1<<'\n';
        }
        
        // cout<<i<<"-> ";
        // for(auto u:adj[i])
        //     cout<<u.first<<","<<u.second<<" ";
    }
    

    return 0;
}