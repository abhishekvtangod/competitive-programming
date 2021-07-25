/**
 *    author:  abhishekvtangod
 *    created: 
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


const ll mxN = 1000+10;
 
string aa = "YES", bb = "NO";
vector<tuple<ll, ll, ll>> tp;
 
vector<pair<ll, ll>> adj[mxN];
ll visited[mxN];
ll dist[mxN];
ll n, m, l, s ,t, sp=0;
vector<pair<ll, ll>> zeros;
ll zero[mxN][mxN];

void init(){
	memset(visited, 0, sizeof(visited));
	for(ll &u: dist){
		u = (1LL<<62);
	}

}
 
// void dijkstra(){
// 	init();
// 	priority_queue<pair<ll, ll>> pq;
// 	pq.push({0, s});
// 	dist[s] = 0;
// 	while(!pq.empty()){
// 		ll src = pq.top().second;
// 		pq.pop();
// 		if(visited[src]){
// 			continue;
// 		}
// 		visited[src] = 1;
 
// 		for(auto u: adj[src]){
// 			if(dist[src] + u.second <= dist[u.first]){
// 				dist[u.first] = dist[src] + u.second;
// 				pq.push({-dist[u.first], u.first});
// 			}
// 		}
// 	}
 
// 	// for(int i = 0; i<n; i++){
// 	// 	debug(dist[i]);
// 	// }
 
// }
void dijkstra(){
	init();
	set<pair<ll, ll>> pq;
	pq.insert({0, s});
	dist[s] = 0;
	while(!pq.empty()){
		ll src = pq.begin()->second;
		pq.erase({pq.begin()});

		for(auto u:adj[src]){
			ll dest = u.first;
			ll len = u.second;

			if(dist[src] + len < dist[dest]){
				pq.erase({dist[dest], dest});
				dist[dest] = dist[src] + len;
				pq.insert({dist[dest], dest});
			
			}

		}

	}


}
 


void solve(){
	init();
	cin >> n >> m >> l >> s >> t;
	for(int i = 0; i<m ; i++){
		ll u, v;
		ll w;
		cin >> u >> v >> w;
		tp.push_back({u, v, w});
	}
	for(auto u: tp){
		ll a, b;
		ll wt;
		tie(a, b, wt) = u;		
		if(wt == 0){
			zeros.push_back({a, b});
			continue;
		}
		adj[a].push_back({b, wt});
		adj[b].push_back({a, wt});
	}
	dijkstra();
 
	if(dist[t] < l){
		cout << bb << endl;
		return;
	}
	for(auto u: zeros){
		ll a = u.first, b = u.second;
		adj[a].push_back({b, 1});
		adj[b].push_back({a, 1});
		zero[a][b] = 1;
		zero[b][a] = 1;
		dijkstra();
		if(dist[t]<l){
			adj[a].pop_back();
			adj[b].pop_back();
			adj[a].push_back({b, l-dist[t]+1});
			adj[b].push_back({a, l-dist[t]+1});
			zero[a][b] = l-dist[t]+1;
			zero[b][a] = l-dist[t]+1;
		}
	}
	dijkstra();
	debug(dist[t], l);
	if(dist[t] > l){
		cout << bb << endl;
		return;
	}
	cout << aa << endl; 
 	for(auto u: tp){
 		ll a,b, w;
 		tie(a,b,w) = u;
 		if(!w)continue;
 		cout << a << " " << b << " " << w << endl;
 	}
 	for(auto u: zeros){
 		cout << u.first << " " << u.second << " " << zero[u.first][u.second] << endl;
 	}

}
 


int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 

	// ll t;cin>>t;
	// while(t--){
		solve();
	// }
	

    return 0;
}