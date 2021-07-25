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


const int mxN = 2*1e5 + 6;
vector<int> adj[mxN];
vector<pair<int, int>> edge;
int visited[mxN];
int priority[mxN];
vector<int> order;
int flag = 0;

void init(int n){
	for(int i = 0 ; i < n+5; i++){
		adj[i].clear();
		visited[i] = 0;
		priority[i] = -1;
		edge.clear();
	}
	order.clear();
	flag = 0;
}

void dfs(int s, int parent){
	if(visited[s]){
		return;
	}
	visited[s] = 1;
	for(auto u: adj[s]){
		if(visited[u]==1 && u != parent){
			// debug(s, u, parent);
			flag = 1;
		} else if(!visited[u]){
			dfs(u, s);
		} 
	}
	visited[s] = 2;
	order.push_back(s);
}

void solve(){
	int n, m;
	cin >> n >> m;
	init(n);
	for(int i = 0 ; i < m; i++){
		int t, x, y;
		cin >> t >> x >> y;
		x--; y--;
		if(t == 1){
			adj[x].push_back(y);
		}

		edge.push_back({x, y});
	}
	for(int i = 0 ; i< n; i++){
		if(!visited[i]){
			dfs(i, -1);
		}
	}
	if(flag){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	int cnt = 1;
	for(int i : order){
		priority[i] = cnt++;
	}
	for(auto u: edge){
		int a = u.first, b = u.second;
		if(priority[a] < priority[b]){
			swap(a, b);
		}
		cout << a+1 << " " << b+1 << endl;
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
	cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}