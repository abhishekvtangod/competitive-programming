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

// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };

int src;

const int mxN = 3000+ 6;
vector<pair<int, ll>> adj[mxN];
map<pair<int, int>, ll> mp;
ll dist[mxN];


void init(){
	mp.clear();
	for(auto &u: dist){
		u = (1LL<<62);
	}
	for(auto &u: adj){
		u.clear();
	}
}

void dijkstra(){
	set<pair<ll, int>> pq;

	pq.insert({0, src});
	dist[src] = 0;
	while(!pq.empty()){
		int s = pq.begin()->second;
		pq.erase(*pq.begin());
		for(auto u: adj[s]){
			if(dist[s] + u.second < dist[u.first]){
				pq.erase({dist[u.first], u.first});
				dist[u.first] = dist[s] + u.second;
				pq.insert({dist[u.first], u.first});
			}
		}

	}

}

void solve(){
	init();
	ll n, m;
	cin >> n  >> m;
	for(int i = 0 ; i<m; i++){
		int u, v;
		ll w;
		cin >> u >> v >> w;
		if(u > v){
			swap(u, v);
		}

		if(mp[{u, v}] == 0){
			mp[{u, v}] = w;
		} else{
			mp[{u, v}] = min({mp[{u,v}], w});
		}

	}

	for(auto i: mp){
		int u = i.first.first;
		int v = i.first.second;
		int w = i.second;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});

	}	
	cin >> src;

	dijkstra();
	for(int i = 1; i<=n; i++){
		if(i == src){
			continue;
		} else if(dist[i] == (1LL<<62)){
			cout << -1 << " ";
		} else {
			cout << dist[i] << " ";
		}

	}
	cout << endl;

}


int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 

	ll t;cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}