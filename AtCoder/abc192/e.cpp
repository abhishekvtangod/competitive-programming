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

const ll mxM = 1e5 + 10;
const ll mxN = 1e5 + 10;
vector<pair<ll, pair<ll, ll>>> adj[mxN];
ll n, m, x, y;
ll dist[mxN];

void dijkstra(){
	for(int i = 0 ; i < mxN; i++){
		dist[i] = (1LL<<62);
	}

	set<pair<ll, ll>> pq;
	pq.insert({0, x});
	dist[x] = 0;
	while(!pq.empty()){
		ll src = pq.begin()->second;
		pq.erase(*pq.begin());
		debug(src);		
		for(auto u: adj[src]){
			ll to = u.first;
			ll len = u.second.first;
			ll dely = (u.second.second - dist[src]%u.second.second)%u.second.second;
			debug(dely, dist[src], u.second.second);
			ll time = len + dely;
			if(dist[src] + time < dist[to]){
				pq.erase({dist[to], to});
				dist[to] = dist[src] + time;
				pq.insert({dist[to], to});
			}

		}
	}
	for(int i = 1; i <= n; i++){
		debug(i, dist[i]);
	}
	if(dist[y] == (1LL<<62)){
		cout << -1 << endl;
		return;
	}
	cout << dist[y] << endl;

}

void solve(){
	cin >> n >> m >> x >> y;
	for(int i = 0 ; i < m; i++){
		int a, b, t, k;
		cin >> a >> b >> t >> k;
		adj[a].push_back({b, {t, k}});
		adj[b].push_back({a, {t, k}});
	}	
	dijkstra();

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