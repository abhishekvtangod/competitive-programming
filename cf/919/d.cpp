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

const int mxN = 300000 + 6;
int n, m;
vector<int> adj[mxN];
string s;
int dp[mxN][30], visited[mxN];
int f = 0;
int ans = 0;
void dfs(int src){
	visited[src] = 1;
	for(auto u: adj[src]){
		if(!visited[u]){
			dfs(u);
		} else if(visited[u] == 1){
			f = 1;
		} 

		for(int i= 0 ;i < 26; i++){
			dp[src][i] = max({dp[src][i], dp[u][i]});
		}
	}
	dp[src][s[src]-'a']++;
	for(int i =0; i < 26; i++){
		ans = max({ans, dp[src][i]});
	}

	visited[src] = 2;
}

void solve(){
	cin >> n >> m;
	cin >> s;
	memset(dp, 0, sizeof(dp));
	memset(visited, 0, sizeof(visited));
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		x--;y--;
		adj[x].push_back(y);
	}
	for(int i= 0; i < n; i++){
		if(!visited[i]){
			dfs(i);
		}
	}
	if(f){
		cout << -1 << endl;
		return;
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
 

	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}