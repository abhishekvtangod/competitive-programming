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


const int mxN = 1000+9;
const int mxK = (1<<11)-1;
vector<pair<int, int>> adj[mxN];
vector<int> t;
ll dist[mxN][mxK];

void init(){
	for(auto &u : dist){
		for(auto &i : u){
			i = (1<<30);
		}
	}

}

void dijkstra(){
	set<tuple<int, int, int>> pq;
	//{dist, node, k}
	pq.insert({0,0,t[0]});

	dist[0][t[0]] = 0;
	while(!pq.empty()){
		int d, s, k;
		tie(d, s, k) = *pq.begin();
		pq.erase({d, s, k});
		for(auto u: adj[s]){
			if(dist[u.first][k|t[u.first]] > d + u.second){
				// cout << u.first << " " << (k|t[u.first]) << endl;
				pq.erase({dist[u.first][k|t[u.first]], u.first, k|t[u.first]});
				dist[u.first][k|t[u.first]] = dist[s][k] + u.second;
				pq.insert({dist[u.first][k|t[u.first]], u.first, k|t[u.first]});
			}
		}
	}

}

void solve(){
	int n, m, k;
	memset(dist, 0, sizeof(dist));
	cin >> n >> m >> k;
	for(int i = 0; i< n; i++){
		int x;
		cin >> x;
		int mask = 0;
		for(int j =  0 ;j < x; j++){
			int temp;
			cin >> temp;
			mask |= (1<<(temp-1));
		}
		t.push_back(mask);
	}
	for(int i = 0; i<m;i++){
		int u, v, w;
		cin >> u >> v >> w;
		u--;v--;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}

	init();
	dijkstra();

	// for(int i = 0 ; i <=(1<<k)-1;i++){
	// 	cout << dist[n-1][i] << " " << i;
	// 	cout << endl;
	// }	
	int ans = (1<<30);
	for(int i = 0; i<=(1<<k)-1; i++){
		for(int j= 0; j<=(1<<k)-1; j++){
			if((i|j) == (1<<k)-1){
				int temp = max({dist[n-1][i], dist[n-1][j]});
				ans = min({ans, temp});
			}
		}
	}
	cout << ans << endl;

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