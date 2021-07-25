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
 
const int mxN = 1e5+9;
vector<pair<int, ll>> adj[mxN];
vector<pair<int, ll>> adjOg[mxN];
vector<ll> t(mxN, (1LL<<62));
ll dist[mxN];
int n, m, k;
 
 
void dijk(){
	for(ll &i: dist){
		i = (1LL<<62);
	}
	set<pair<ll, int>> pq;
	dist[1] = 0;
	pq.insert({0, 1});
 
	while(!pq.empty()){
		ll node = pq.begin()->second;
		pq.erase(*pq.begin());
 
		for(auto u: adj[node]){
			if(dist[node] + u.second < dist[u.first]){
				pq.erase({dist[u.first], u.first});
				dist[u.first] = dist[node] + u.second;
				pq.insert({dist[u.first], u.first});
			}
		}
	}
 
	for(int i = 1; i<=n; i++){
		debug(i, dist[i]);
	}
 
}
 
void solve(){
	cin >> n >> m >> k;
	for(int i = 0 ;i < m; i++){
		int a, b;
		ll w;
		cin >> a >> b >> w;
		adj[a].push_back({b, w});
		adj[b].push_back({a, w});

		adjOg[a].push_back({b, w});
		adjOg[b].push_back({a, w});
	}
	int cnt = 0;
	for(int i = 0 ;i < k; i++){
		int a;
		ll w;
		cin >> a >> w;
		adj[1].push_back({a, w});
		adj[a].push_back({1, w});
		if(t[a] != (1LL<<62)){
			cnt++;
		}
		t[a] = min({t[a], w});
	}
	dijk();
	debug(cnt);
	for(int i=2;i<=n; i++){
		if(t[i] == (1LL<<62)){
			continue;
		}
		bool flag = 0;
		for(auto u: adjOg[i]){
			if(dist[i] == dist[u.first] + u.second){
				flag = 1;
				break;
			}
		}
		if(flag){
			debug(i, dist[i]);
			cnt++;
		}
	}
	cout << cnt << endl;
		
 
 
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