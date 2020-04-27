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


vector<pair<ll,ll>> adj[100005];
ll dist[100005];
ll procd[100005];
ll n,m;

ll DYKE_strah(ll s, ll d)
{
	for(ll i=1; i<=n; i++)
	{
		dist[i] = 1e9+5;
		procd[i] = false;
	}


	priority_queue<pair<ll,ll>> pq;
	
	
	pq.push({0,s});
	dist[s] = 0;
	while(!pq.empty())
	{
		s = pq.top().second;pq.pop();
		if(procd[s]) continue;
		procd[s] = true;
		
		for(auto u:adj[s])
		{
				ll v = u.first,w = u.second;
				
		
				if(dist[s]+w < dist[v])
				{
					dist[v] = dist[s]+w;
					pq.push({-dist[v],v});
				}
				
				
		}
	
	}
	if(dist[d] == 1e9+5)
		return -1;
	
	return dist[d];
	
}


void solve()
{
	ll s,d;cin>>n>>m>>s>>d;
	ll u,v,w;
	for(ll i=0;i <=n;i++)adj[i].clear();
	
	for(ll i=0;i<m;i++)
	{
		cin>>u>>v>>w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
	}
	
	ll ans = DYKE_strah(s,d);
	if(ans == -1)
	{
		cout<<"NONE\n";
	}
	else
		cout<<ans<<"\n";
	
	
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
