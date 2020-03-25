// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;
ll dfs(ll i,vector<ll> adj[],bool visited[])
{
    visited[i] = true;
    ll cnt = adj[i].size();
    for(auto u: adj[i])
    {
        if(!visited[u])
            cnt+=dfs(u,adj,visited);        
    }
    return cnt;
}

void addEdge(vector<ll> adj[],ll u,ll v)
{
    
    adj[u].push_back(v);
    adj[v].push_back(u);

}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,m;
    cin>>n>>m;

    vector<ll> adj[n+1];
    ll u,v;
    for(ll i =0;i<m;i++)
    {
        cin>>u>>v;
        addEdge(adj,u,v);
        if(u > v)
            swap(u,v);    
        
    }

    bool visited[n+1];
    memset(visited,false,n+1);
    ll max_comp=0;
    // memset(max_comp,0,n+1);
    for(ll i =1; i <=n; i++ )
    {
        if(!visited[i])
        {
            
            max_comp=max(max_comp,dfs(i,adj,visited)/2);
        }
    }
    cout<<max_comp;
    return 0;
}