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
vector<bool> trn(mxN, false);
ll dist[mxN];
int n, m, k;
int cnt = 0;



void dijk(){

	set<pair<ll, int>> pq;
	dist[1] = 0;
	pq.insert({0, 1});

	for(int i = 1; i<=n; i++){
		if(trn[i]){
			pq.insert({dist[i], i});
		}
	}

	while(!pq.empty()){
		ll node = pq.begin()->second;
		pq.erase(*pq.begin());

		for(auto u: adj[node]){
			if(dist[node] + u.second <= dist[u.first]){
				
				if(trn[u.first]){
					cnt++;
					debug(dist[node], dist[u.first]);
				}
				trn[u.first] = false;

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
	for(ll &i: dist){
		i = (1LL<<62);
	}
	cin >> n >> m >> k;
	for(int i = 0 ;i < m; i++){
		int a, b;
		ll w;
		cin >> a >> b >> w;
		adj[a].push_back({b, w});
		adj[b].push_back({a, w});
	}
	for(int i = 0 ;i < k; i++){
		int a;
		ll w;
		cin >> a >> w;
		if(trn[a] == true){
			cnt++;
		}
		dist[a] = min({dist[a], w});
		trn[a] = true;
	}
	debug(cnt);
	dijk();

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