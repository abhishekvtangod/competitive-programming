// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

ll cnt = 0;

void addEdge(vector<ll> adj[], ll u, ll v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFS(vector<ll> adj[], ll v , vector<bool> &visited)
{
    cnt++;

    visited[v] = true;
    for(auto it = adj[v].begin(); it != adj[v].end() ; it++)
    {
        if(visited[*it] == false)
        {
            DFS(adj,*it,visited);
        }
    }
}



int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    ll v;cin>>v;
    vector<ll> adj[v];
    ll a,b;
    for(ll i =0; i < v-1 ; i++)
    {
        cin>>a>>b;
        addEdge(adj,a,b);
    }
    vector<bool> visited(v, false);

    DFS(adj,1, visited);

    cout<<cnt<<endl;

    return 0;
}