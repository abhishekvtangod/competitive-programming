// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;
ll cnt=0;

void addEdge(vector<ll> adj[],ll u,ll v)
{
    adj[u].push_back(v); 
    adj[v].push_back(u); 
}

void dfs(ll s,vector<ll> adj[],bool visited[])
{
    if(visited[s])return;
    visited[s]=true;
    cout<<s<<"->";
    for(auto u:adj[s])
    {
        dfs(u,adj,visited);
    }

}




int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,m;cin>>n>>m;
    ll k,x,y;
    cin>>k>>x>>y;
    x--;
    y--;
    char p,q;
    vector<ll> adj[(n+1)*(m+1)];
    ll arr[n+1][m+1];
    ll start=-1;
    for(ll i =0;i < n; i++)
    {
        for(ll j =0; j < m; j++)
        {
            cin>>p;
            if(p == '.')
            {
                
                arr[i][j]=cnt;
                if(i == x && j == y)
                    start = arr[i][j];
                
                cnt++;

            }
            else
            {
                arr[i][j] = -1;
            }
            
            
        }
    }
    ll i;
    for(i =0;i < n; i++)
    {
        for(ll j =0; j < m-1; j++)
        {
            if(arr[i][j] != -1 && arr[i][j+1] != -1)
            {
                addEdge(adj,arr[i][j],arr[i][j+1]);
            }
                        
        }
    }
    for(i =0;i < n-1; i++)
    {
        for(ll j =0; j <m; j++)
        {
            if(arr[i][j] != -1 && arr[i+1][j] != -1)
            {
                addEdge(adj,arr[i][j],arr[i+1][j]);
            }
        }
    }
    // cout<<endl<<endl;
    // for(ll i=0; i < 18;i++)
    // {
    //     cout<<i<<"-> ";
    // for(auto u:adj[i])
    //     cout<<u<<" ";
    //     cout<<endl;}
    bool visited[cnt];
    memset(visited,false,cnt);
    dfs(start,adj,visited);



    return 0;
}