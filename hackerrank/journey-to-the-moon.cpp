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

vector<ll> adj[100005];
ll visited[100005];


ll dfs(ll x)
{
	ll nd=1;
	visited[x]=1;
	for(auto u:adj[x])
	{
		if(!visited[u])
		{
			nd+=dfs(u);
		}
	}
	return nd;
}

void solve()
{
		ll n,p;cin>>n>>p;
		ll u,v;
		memset(visited,0,n+1);
		
		for(ll i=0; i<p;i++)
		{
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		vector<ll> vv;
		for(ll i=0; i <n;i++)
		{
			if(!visited[i])
			{
				vv.push_back(dfs(i));
			}
			
		}
		sort(vv.begin(),vv.end());
		ll cnt=0;
		ll sum=vv[0];
		for(ll i=1; i<(ll)(vv.size());i++)
		{
			cnt+=vv[i]*sum;
			sum+=vv[i];
		}
		cout<<cnt;
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
