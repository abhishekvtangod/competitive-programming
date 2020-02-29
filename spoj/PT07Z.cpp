// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;


void addEdge(vector<ll> adj[], ll u, ll v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
ll last_node ;

ll bfs_length(vector<ll> adj[],ll v,vector<bool> visited,ll distance[])
{   
    visited[v] = true;
    queue<ll> q;
    q.push(v);
    distance[v]=0;
    ll mx =0;
    last_node=v;
    while (!q.empty())
    {
        ll s = q.front();
        // cout<<s<<"->";
        q.pop(); 
        for(auto it = adj[s].begin(); it != adj[s].end(); it++)
        {
            if(visited[*it]) continue;
            visited[*it] = true;
            distance[*it] = distance[s]+1;
            q.push(*it);
            if(mx < distance[*it])
            {
                mx = max(mx,distance[*it]);
                last_node = *it;
            }
            
            // cout<<mx<<endl;

        }

    }
    
    return mx;
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    ll v;cin>>v;
    vector<ll> adj[v+1];
    ll a,b;
    for(ll i =0; i < v-1 ; i++)
    {
        cin>>a>>b;
        addEdge(adj,a,b);
    }
    vector<bool> visited(v+1, false);
    ll distance[v+1]={0};
    ll mx_lt =0;
    
    bfs_length(adj,1, visited,distance);
    cout<<bfs_length(adj,last_node, visited,distance);
     

    return 0;
}