// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 

void removeEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].erase(remove(adj[u].begin(),adj[u].end(),v),adj[u].end()); 
    adj[v].erase(remove(adj[v].begin(),adj[v].end(),u),adj[v].end());
} 
bool isBipartite(vector<int> adj[], int v, 
                 vector<bool>& visited, vector<int>& color) 
{ 
  
    for (int u : adj[v]) { 
  
        if (visited[u] == false) { 
  
            visited[u] = true; 
  
            color[u] = !color[v]; 
  
            if (!isBipartite(adj, u, visited, color)) 
                return false; 
        } 
  
        else if (color[u] == color[v]) 
            return false; 
    } 
    return true; 
} 



int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll N,q;
    cin>>N;cin>>q;
    vector<int> adj[N + 1]; 
  
    vector<bool> visited(N + 1); 
  
    vector<int> color(N + 1); 
    vector<pair<ll,ll>> v;
    visited[1] = true; 
    color[1] = 0; 
    while(q--)
    {
       ll x=-1,y=-1,z=-1;
       cin>>x>>y>>z;
       if(x == 1)
       {
           addEdge(adj,y,z);
       }
       else
       {    
        //    v.push_back({y,z});
        //    addEdge(adj,y,z);

           cout<<(isBipartite(adj,1,visited,color))<<"\n";
        //    removeEdge(adj,y,z);
        
       }

    }

    return 0;
}