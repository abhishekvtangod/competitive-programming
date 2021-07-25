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


const int mxN = 3000+8;
int n, m, k;
vector<int> adj[mxN];
ll dist[mxN][mxN], vis[mxN][mxN];
set<array<int, 3>> mp;

void bfs(){
	for(auto &u: dist){
		for(auto &i : u){
			i = (1LL<<62);
		}
	}
	memset(vis, 0, sizeof(vis));
	queue<pair<int, int>> q;
	q.push({1, 0});
	vis[1][0] = 1;
	dist[1][0] = 0;
	while(!q.empty()){
		int s = q.front().first;
		int p = q.front().second;
		q.pop();

		for(auto u: adj[s]){
			debug(p, s, u, 1);
			// if(mp[{p, s}] == u){
			if(mp.find({p, s, u}) != mp.end()){	
				debug(p, s, u, 2);
				continue;
			} else{
				if(!vis[u][s]){
					q.push({u, s});
					vis[u][s] = 1;
					dist[u][s] = dist[s][p] + 1;
				}
			}
		}
	}
	ll len = (1LL<<62);
	int par = 0;
	for(auto u: adj[n]){
		if(len > dist[n][u]){
			len = dist[n][u];
			par = u;
		}
	}
	if(len == (1LL<<62)){
		cout << -1 << endl;
		return;
	}
	cout << len << endl;
	
	vector<int> ans;
	ans.push_back(n);
	int child = par;
	par = n;
	int temp = child;
	debug(par, child, temp);
	while(temp != 1){
		ans.push_back(child);
		len = (1LL<<62);
		for(auto u: adj[child]){
			if(len > dist[child][u] && mp.find({u, child, par}) == mp.end()){
					len = dist[child][u];
					temp = u;
			}
		}
		debug(par, child, temp);
		par = child;
		child = temp;
	}
	cout << 1 << " ";
	reverse(ans.begin(), ans.end());
	for(auto u: ans){
		cout << u << " ";
	}

}


void solve(){
	cin >> n >> m >> k;
	for(int i = 0 ; i < m; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i = 0; i< k; i++){
		int a, b, c;
		cin >> a >> b >> c;
		mp.insert({a, b, c});
	}
	bfs();


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