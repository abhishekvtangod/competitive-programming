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

const int mxN = 1e6 + 6;
string aa = "IMPOSSIBLE";

vector<int> adj[mxN];
int visited[mxN], color[mxN];
int flag = 0;

void dfs(int node, int parent){
	if(visited[node]){
		if(parent!=-1 && color[node] == color[parent]){
			flag = 1;
		}
		return;
	}
	visited[node] = 1;
	if(parent != -1){
		color[node] = !color[parent];
	}
	
	for(auto u: adj[node]){
		dfs(u, node);
	}
}

void solve(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < mxN; i++){
		visited[i] = 0;
		color[i] = 0;
	}
	for(int i = 0 ; i < m; i++){
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i = 1; i <=n; i++){
		if(!visited[i]){
			dfs(i, -1);
		}
	}
	if(flag){
		cout << aa << endl;
		return;
	}
	for(int i = 1; i <=n ; i++){
		cout << (color[i] == 0? 1: 2) << " ";
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