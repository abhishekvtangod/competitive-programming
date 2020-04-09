// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<pair<ll,ll>> indexed_set;


#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif


// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };

vector<ll> adj[1005];
ll visited[1005];	
ll dist[1005];

void bfs(ll x)
{
	queue<ll> q;
	q.push(x);
	visited[x]=1;
	dist[0]=0;
	while(!q.empty())
	{
		ll s = q.front();q.pop();

		for(auto u:adj[s])
		{
			if(!visited[u])
			{
				visited[u]=1;
				dist[u]=dist[s]+1;
				q.push(u);
			}

		}
		
		
		
	}
	

}

void solve()
{
	ll u,v,n,s,m;cin>>n>>m;
	
	
	for(ll i=0;i<n+1;i++)adj[i].clear(),visited[i]=0,dist[i]=0;
	
	for(ll i=0;i < m;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);

	}
	cin>>s;
	
	bfs(s);
	
	for(ll i=1; i<=n;i++)
	{
		if(i == s)continue;
		else if(visited[i])cout<<dist[i]*6<<" ";
		else cout<<"-1 ";
	}
	cout<<'\n';
	
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t;cin>>t;
	while(t--)
	{
		solve();
	}
	

    return 0;
}
