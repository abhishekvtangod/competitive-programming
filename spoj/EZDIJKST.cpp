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

vector<pair<ll,ll>> adj[10004];
ll dist[10004];
ll visited[10004];


ll dijkstra(ll a,ll b)
{
	priority_queue<pair<ll,ll>> pq;
	dist[a]=0;

	pq.push({0,a});
	
	visited[a]=1;
	
	while(!pq.empty())
	{
		ll s = pq.top().second;pq.pop();
		
		visited[s]=1;
		for(auto u:adj[s])
		{
			if(!visited[u.first])
			{
				ll v = u.first,w = u.second;
			
				
				if(dist[s]+w < dist[v])
				{
					dist[v]=dist[s]+w;
					pq.push({-dist[v],v});
				}

			}
		}
	}
	
	if(dist[b] == (ll)INFINITY)
		return -1;
		
	return dist[b];
}



void solve()
{
	ll v,x,y,k,w;cin>>v>>k;
	for(ll i=1;i<=v;i++){
			adj[i].clear();
			visited[i]=0;
			dist[i]=INFINITY;
	}
	
	
	
	
	for(ll i=0; i <k;i++)
	{
		cin>>x>>y>>w;
		adj[x].push_back({y,w});
	}
	ll a,b;cin>>a>>b;
	ll ans = dijkstra(a,b);
	if(ans == -1)
		cout<<"NO\n";
	else
		cout<<ans<<endl;
	
	
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
