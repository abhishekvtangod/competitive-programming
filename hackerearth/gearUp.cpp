/**
 *    author:  abhishekvtangod
 *    created:        
**/

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

const ll mxN = 1e5+5;
vector<ll> adj[mxN];
vector<ll> ve(mxN);
vector<bool> visited(mxN,false);
vector<ll> color(mxN,0);

void bfs(int x)
{
	queue<ll> q;
	ll s = x;
	q.push(s);
	visited[s]=true;
	
	while(!q.empty())
	{
		s = q.front();q.pop();
		for(auto u:adj[s])
		{
			if(!visited[u])
			{
				visited[u]=true;
				q.push(u);
				if(ve[u]==-1)
				{
					color[u]=color[s];
				}
				else
				{
					color[u]=!color[s];
					
				}
				//cout<<u<<" "<<color[u]<<endl;
				
			}
			
		}
	}
}

void addEdge(ll u,ll v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);

}


void solve()
{
	ll n,m,q;
	cin>>n>>m>>q;
	for(ll i=1;i<=n;i++)cin>>ve[i];
	for(ll i=0;i<m;i++)
	{
		ll u,v;cin>>u>>v;
		addEdge(u,v);
	}
	for(ll i=1;i<=n;i++)
	{
		if(!visited[i])
			bfs(i);

	}
	//for(ll i=1;i<=n;i++)cout<<color[i]<<" ";
	
	
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	//ll t;cin>>t;
	//while(t--)
	//{
		solve();
	//}
	

    return 0;
}
