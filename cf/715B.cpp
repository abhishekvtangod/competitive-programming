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

const int mxN = 1000+6;
ll n, m, l, s, t;
vector<pair<ll, ll>> adj[mxN];
int visited[mxN];
ll distS[mxN], distT[mxN];

void init(){
	memset(visited, 0, sizeof(visited));
	for(auto &u: distS){
		u = (1<<62);
	}
	for(auto &u: distT){
		u = (1<<62);
	}

}

void dijkstraT(){
	priority_queue<pair<ll, ll>> pq;
	pq.push({0, t});
	distT[t] = 0;
	while(!pq.empty()){
		ll src = pq.top().second;
		pq.pop();
		if(visited[src]){
			continue;
		}
		visited[src] = 1;
		for(auto u: adj[src]){
			ll temp = u.first;
			if(temp == -1){
				temp = 1;
			}
			if(distT[src] + u.first < distT[u.second]){
				distT[u.second] = distT[src] + u.first;
				pq.push({-dist[u.second], u.second});
			}
		}
	}


}

void solve(){
	init();
	cin >> n >> m >> l >> s >> t;
	for(int i = 0; i < m; i++){
		ll u, v, w;
		cin >> u >> v >> w;
		if(w == 0){
			w = -1;
		}
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}
	dijkstraT();
	// dijkstraS();


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