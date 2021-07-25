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

const int mxN = 1e5 + 6;

int n, m;
vector<int> c;
vector<int> adj[mxN];
int vis[mxN];
set<int> temp[mxN];

void dfs(int src){
	for(auto u: adj[src]){
		if(c[u-1] != c[src-1]){
			temp[c[src-1]].insert(c[u-1]);
		}
	}
	for(auto u: adj[src]){
		if(!vis[u]){
			vis[u] = 1;
			dfs(u);
		}
	}
}

// start of CP 2.0
void solve(){
	memset(vis, 0, sizeof(vis));
	cin >> n >> m;
	for(int i= 0; i < n; i++){
		int t;
		cin >> t;
		c.push_back(t);
		temp[t].insert(-1);
	}
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vis[1] =1;
	for(int i = 1; i <= n; i++){
		if(!vis[i]){
			dfs(i);
		}
	}
	int mx = 0, ans = 1;

	for(int i = 1;i < mxN; i++){
		if(mx < temp[i].size()){
			mx = temp[i].size();
			ans = i;
		}
	}
	debug(mx);
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