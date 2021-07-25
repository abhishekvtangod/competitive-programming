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

const int mxN = 1e5 + 6;
ll n, m, k;
vector<ll> a;
vector<pair<ll, ll>> adj[mxN];
ll dist[mxN];

void dijk(int sr){
	set<pair<int,  int>> pq;
	for(int i = 0; i < mxN; i++){
		dist[i] = (1LL<<62);
	}
	pq.insert({0, sr});
	dist[sr] = 0;
	while(!pq.empty()){
		ll src = pq.begin()->second;
		pq.erase(pq.begin());
		for(auto v: adj[src]){
			if(dist[src] + v.second < dist[v.first]){
				pq.erase({dist[v.first], v.first});
				dist[v.first] = dist[src] + v.second;
				pq.insert({dist[v.first], v.first});
			}
			
		}
	}
}


void solve(){
	cin >> n >> m >> k;
	for(int i = 0; i < n;i++){
		ll temp;
		cin >> temp;
		a.push_back(temp);
	}
	for(int i = 0; i < m ; i++){
		ll u, v, w;
		cin >> u >> v >> w;
		u--; v--;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});

	}
	for(int i = 0; i < n; i++){
		adj[i].push_back({n, a[i]});
		adj[n].push_back({i, a[i]});
	}
	for(int i = 0; i < k; i++){
		ll temp;
		cin >> temp;
		temp--;
		dijk(temp);
		for(int j = 0; j < n; j++){
			cout << dist[j] << " ";
		}
		cout << endl;
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