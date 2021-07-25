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

const int mxMN = 2*1e5+6;
vector<int> adj[mxMN];
int visited[mxMN];
int color[mxMN];
int z = 0, o = 0;
int f = 0;

void dfs(int s){
	visited[s] = 1;
	debug(s);
	for(auto u: adj[s]){
		if(!visited[u]){
			color[u] = !color[s];
			dfs(u);
		} else if(color[u] == color[s]){
			f = 1;
		}
	}
	if(color[s]){
		o++;
	} else{
		z++;
	}

}


void solve(){
	memset(visited, 0, sizeof(visited));
	memset(color, 0, sizeof(color));
	int n, m;
	cin >> n >> m;
	for(int i = 0 ; i < m; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dfs(i);
			debug();
		}
	}
	if(f){
		cout << -1 << endl;
		return;
	}

	cout << o << endl;
	for(int i= 1; i <=n ;i++){
		if(color[i]){
			cout << i << " ";
		}

	}
	cout << endl;


	cout << z << endl;
	for(int i= 1; i <=n ;i++){
		if(!color[i]){
			cout << i << " ";
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
 

	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}