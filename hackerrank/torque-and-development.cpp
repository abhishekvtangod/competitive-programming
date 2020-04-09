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
vector<ll> *adj;
ll *visited;

ll dfs(ll x)
{
	ll rd = 1;
	visited[x]=true;
	//cout<<x<<" ";
	for(auto u:adj[x])
	{
		if(!visited[u])
		{
			rd+=dfs(u);
		}
	}
	return rd;
}
void solve()
{
	ll n,m,cl,cr;cin>>n>>m>>cl>>cr;
	
	adj = new vector<ll>[n+2];
	visited = new ll[n+2];
	
	
	for(ll i=0;i<m;i++)
	{
		ll u,v;cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);

	}
	//memset(visited,0,n+2);
	fill(visited,visited+n+2,0);
	//for(ll i=0;i<n+2;i++)
		//cout<<visited[i]<<" ";
		//cout<<endl;
	ll lib=0,roads=0;
	for(ll i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			roads+=dfs(i)-1;
			lib++;

		}
	}
	ll cost1=roads*cr+lib*cl,cost2=n*cl;
	//cout<<"----"<<cost1<<" "<<cost2<<"-----\n";
	//cout<<"^^^^"<<roads<<" "<<lib<<"^^^^^\n";
	cout<<min(cost1,cost2)<<'\n';


	delete[] adj;
	delete[] visited;

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
