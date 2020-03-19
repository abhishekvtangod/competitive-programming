// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;
map<ll,ll> parent;

void addEdge(vector<pair<ll,ll>> adj[],ll u, ll v,ll w)
{
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}
void dfs_util(vector<pair<ll,ll>> adj[],ll n,ll nodes,bool visited[])
{
    if(visited[n])return;
    visited[n] = true;
    for(auto u:adj[n])
    {
        dfs_util(adj,u.first,nodes,visited);
    }
}
bool dfs(vector<pair<ll,ll>> adj[],ll n,ll nodes)
{
    bool visited[nodes+1];
    memset(visited,false,nodes+1);

    dfs_util(adj,n,nodes,visited);
    if(visited[nodes]==false)
    {
        cout<<"-1\n";
        return false;
    }
    return true;
}

void dijkstra(vector<pair<ll,ll>> adj[], ll distance[],ll x, ll nodes)
{
    distance[x]=0;
    priority_queue<pair<ll,ll>> q;
    q.push({0,x});
    // cout<<"\n--nodes"<<nodes<<"\n";
    bool processed[nodes+1];
    memset(processed,false,nodes+1);
    while (!q.empty())
    {
        ll a = q.top().second;
        q.pop();
        if(processed[a]) continue;
        processed[a] = true;
        for(auto it = adj[a].begin();it != adj[a].end();it++)
        {
            ll b = it->first; 
            ll w = it->second;
            if(distance[a]+w < distance[b])
            {
                distance[b] = distance[a]+w;
                q.push({-distance[b],b});
                parent[b] = a;
            }

        }

    }

    
    
}



void path(vector<pair<ll,ll>> adj[],ll distance[],ll n)
{
    vector<ll> v;
    ll x = n;
    // while (x != 1)
    // {
    //     v.push_back(x);

    //     x = parent[x];

    // }
    // v.push_back(1);
    // reverse(v.begin(),v.end());
    // for(auto u:v)
    //     cout<<u<<" ";
    if(parent[n]+1) path(adj,distance,)
    
    
    // for(auto it=parent.begin(); it != parent.end();it++)
    //     cout<<it->first<<"->"<<it->second<<endl;


}

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,m;
    cin>>n>>m;    
    ll u,v,w;
    vector<pair<ll,ll>> adj[n+1];
    map<pair<ll,ll>,ll> mp;
    for(ll i=0; i <m; i++)
    {
        cin>>u>>v>>w;
        if(u > v)
            swap(u,v);
        if(mp[{u,v}] > 0)
        {
            mp[{u,v}] = min(mp[{u,v}],w);   

        }
        else
        {
            mp[{u,v}] = w;
        }
        
        
    
    }
    

    for(auto it = mp.begin();it != mp.end(); it++)
    {
        addEdge(adj,it->first.first,it->first.second,it->second);
    
    
        // cout<<"u,v,w: "<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
    }
    if(dfs(adj,1,n)==false)
        return 0;


    ll distance[n+1];
    memset(distance,INFINITY,n+1);

    dijkstra(adj,distance,1,n);

    // for(ll i =1;i < n+1;i++)
    // {
    //     cout<<i<<"->"<<distance[i]<<", ";
    // }
    // cout<<distance[n]<<'\n';

    
    path(adj,distance,n);    



    return 0;
}