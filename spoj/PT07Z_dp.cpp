/**
 *    author:  abhishekvtangod
**/
// #undef _GLIBCXX_DEBUG
// #undef _ABHI
#include<bits/stdc++.h>
using namespace std; 
 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;
 
string to_string(const string &s){
	return "{" + s + "}";
}
 
string to_string(const char &c){
	string s = "";
	s += c;
	return s;
}
 
template <typename A, typename B>
string to_string(const pair<A, B> &p){
	return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
 
template <typename A, typename B, typename C>
string to_string(const tuple<A, B, C> &t){
	return "(" + to_string(get<0>(t)) + ", " + to_string(get<1>(t)) + ", " + to_string(get<2>(t)) + ")";
}
 
template <typename A>
string to_string(A v){
	string res = "{";
	bool f = 0;
	for(const auto &u: v){
		if(f){
			res += ", ";
		}
		f = 1;
		res += to_string(u);
	}
	res += "}";
	return res;
}
 
void cus_debug() { cerr << "]" << endl; }
 
template <typename Head, typename... Tail>
void cus_debug(Head H, Tail... T) {
  cerr << to_string(H) << ", ";
  cus_debug(T...);
}
 
#ifdef _GLIBCXX_DEBUG
#define debug(x...) cerr << "[" << #x << "]:[", cus_debug(x)
#else
#define debug(...) 42
#endif
 
 
// ##########################################################################################################################
 
/*
	Given a tree T of N nodes, calculate longest path between any two nodes(also known as diameter of tree).
*/
 
// ##########################################################################################################################
 
/*
	f(x) : longest path starting from node x, going to it's subtree
	g(x) : longest path starting from subtree of x, passing through x, and ends in a subtree of x
 
	State: 
		f(node) = 1 + max({f(child1), f(child2), ..., f(childn)});
		g(node) = 2 + sum of two max elements from set {f(child1), f(child2), ..., f(childn)};
 
*/
 
// ##########################################################################################################################
 
const int mxN = 1e5 + 6;
int n;
vector<int> adj[mxN];
int f[mxN], g[mxN], diameter;
 
 
void dfs(int src, int par){
	vector<int> fValues;
 
	for(auto u: adj[src]){
		if(u != par){
			dfs(u, src);
			fValues.push_back(f[u]);
		}
	}
	sort(fValues.begin(), fValues.end());
	int nCh = fValues.size();
 
	if(nCh > 0){
		f[src] = 1 + fValues[nCh-1];
	}
	if(fValues.size() >= 2){
		g[src] = 2 + fValues[nCh-1] + fValues[nCh-2];
	}
 
	diameter =  max({diameter, f[src], g[src]});
}
 
// start of CP 2.0
void solve(){
	memset(f, 0, sizeof(f));
	memset(g, 0, sizeof(g));
	diameter = -1;
	cin >> n;
	for(int i = 0; i < n-1; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1, -1);
	cout << diameter << endl;
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