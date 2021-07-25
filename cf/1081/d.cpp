/**
 *    author:  abhishekvtangod
**/
// #undef _GLIBCXX_DEBUG
// #undef _ABHI
#include<bits/stdc++.h>
using namespace std; 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<pair<ll,ll>> indexed_set;

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

void debug_out() { cerr << "]" << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << H << ", ";
  debug_out(T...);
}

#ifdef _GLIBCXX_DEBUG
#define debug(x...) cerr << "[" << #x << "]:[", debug_out(x)
#else
#define debug(...) 42
#endif

// union by size

struct dsu{
	int n;
	vector<int> siz, link;

	void init(int nodes){
		n = nodes;
		siz.resize(n);
		link.resize(n);
		for(int i = 0; i < n; i++){
			link[i] = i;
			siz[i] = 1;
		}
	}

	int find_set(int x){
		if(link[x] == x){
			return x;
		}
		return link[x] = find_set(link[x]);
	}

	int unite_sets(int a, int b){
		a = find_set(a);
		b = find_set(b);
		if(a == b){
			return 0;
		}
		if(siz[a] < siz[b]){
			swap(a, b);
		}
		siz[a] += siz[b];
		link[b] = a;
		return 1;
	}

};

const int mxN = 1e5 + 6;
ll n, m, k;
vector<pair<ll, ll>> adj[mxN];
vector<pair<pair<ll, ll>, ll>> edge_list;
ll spec[mxN], dp[mxN];
dsu d;

ll ans = 0;
//dfs on tree
void dfs(ll sr, ll p, ll wt){
	dp[sr] = spec[sr];

	for(auto u: adj[sr]){
		if(u.first != p){
			dfs(u.first, sr, u.second);
			dp[sr] += dp[u.first];
		}
	}
	if(dp[sr] > 0 && k - dp[sr] > 0){
		ans = max({ans, wt});
	}

}

void solve(){
	cin >> n >> m >> k;
	memset(dp, 0, sizeof(dp));
	memset(spec, 0, sizeof(spec));
	d.init(n);
	for(int i = 0; i < k; i++){
		ll temp;
		cin >> temp;
		temp--;
		spec[temp] = 1;
	}
	for(int i = 0; i < m; i++){
		ll u, v, w;
		cin >> u >> v >> w;
		u--; v--;
		edge_list.push_back({{w, u}, v});
	}
	sort(edge_list.begin(), edge_list.end());

	for(auto u: edge_list){
		if(d.unite_sets(u.first.second, u.second)){
			adj[u.first.second].push_back({u.second, u.first.first});
			adj[u.second].push_back({u.first.second, u.first.first});	
		}
		
	}

	dfs(0, -1, 0);
	for(int i = 0; i < k ;i++){
		cout << ans << " ";
	}
}


int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 

	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}