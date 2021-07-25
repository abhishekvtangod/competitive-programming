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

// sort edge list
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

dsu d;

const int mxN = 1e5 + 5;
int n, m;
vector<ll> a;
vector<pair<ll, pair<ll, ll>>> edge_list;

ll ans = 0;
// void dfs(ll sr, ll p){
// 	for(auto u: adj[sr]){
// 		if(u.first != p){
// 			ans += u.second;
// 			dfs(u.first, sr);
// 		}
// 	}
// }


void solve(){
	cin >> n >> m;
	d.init(n);
	ll mn = (1LL<<62), idx = 0;
	for(int i = 0; i < n; i++){
		ll temp;
		cin >> temp;
		if(mn > temp){
			idx = i;
			mn = temp;
		}
		a.push_back(temp);
	}
	for(int i = 0; i < m; i++){
		ll u, v, w;
		cin >> u >> v >> w;
		u--; v--;
		edge_list.push_back({w, {u, v}});
	}
	// for(int i = 0; i < n-1; i++){
	// 	for(int j = i+1; j < n; j++){
	// 		if(i == j)continue;
	// 		edge_list.push_back({a[i]+a[j], {i, j}});
	// 	}
	// }
	for(int i = 0; i < n; i++){
		if(idx == i)continue;
		edge_list.push_back({a[i]+mn, {i, idx}});
	}

	sort(edge_list.begin(), edge_list.end());
	for(auto u: edge_list){
		if(d.unite_sets(u.second.first, u.second.second)){
			// adj[u.second.second].push_back({u.second.first, u.first});
			// adj[u.second.first].push_back({u.second.second, u.first});
			ans += u.first;
		}
	}
	// dfs(0, -1);
	cout << ans << endl;
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