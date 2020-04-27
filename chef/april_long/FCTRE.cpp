// [abhishekvtangod]
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


//vector<ll> adj[100005];
//ll visited[100005];


//vector<ll> a;
/ll uu,v;


//ll flag=0;
//ll dfs(ll s)
//{
	//ll prod=1;
	//visited[s]=1;
	
	//for(auto u:adj[s])
	//{
		//prod=a[s-1];
		//if(!visited[u])
		//{
	
			//if(u == v)
			//{
				//flag=1;
				
				//return a[v-1]*a[s-1];
			//}
			//prod*=dfs(u);
			//if(flag)
				//return prod;
		//}
		
	//}
	
	//return -1;
//}

vector<ll> adj[100006];
ll visited[1000006];
ll n;
ll bfs(ll x)
{

	queue<ll> q;
	visited[x]=1;
	q.push(x);
	
	while(!q.empty())
	{
		ll s = q.front();q.pop();
		
		
		for(auto u:adj[s])
		{
			if(!visited[u])
			{
				visited[u]=1;
				q.push(x);
			}
		}
	}
	
}


//ll n_factors(ll n)
//{
	//ll cnt=0;
	//for(ll i=1;i*i<=n;i++)
	//{
		//if(n%i == 0)
		//{
			//if(n/i == i)
				//cnt++;
			//else
				//cnt+=2;
		//}
	//}
	//return cnt;
//}
 

void solve()
{
	ll x,y;cin>>n;
	for(ll i=0;i<n;i++)
	{
		adj[i].clear();
		visited[i]=0;
	}
	
	for(ll i=0; i<n-1;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);

	}
	for(ll i=0; i< n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	
	ll q;cin>>q;

	for(ll i=0;i < q; i++)
	{
		cin>>uu>>v;
		fill(visited,visited+n+2,0);
		flag=0;
		
		
		//if(uu==v)
		//{
			//cout<<(n_factors(a[v-1]))%mod<<endl;
		//}
		//else
		//{
			//cout<<(n_factors(dfs(uu)))%mod<<endl;
		//}
		
	}
	
	
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
