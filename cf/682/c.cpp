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
ll n;
vector<ll> v;
vector<pair<ll, ll>> adj[mxN];
ll dist[mxN], parent[mxN], vis[mxN];

void dfs(ll src, ll par){
	parent[src] = par;
	for(auto i: adj[src]){
		ll u = i.first;
		ll w = i.second;
		if(u != par){
			dist[u] = max({dist[u], dist[src] + w});
			dfs(u, src);
		}
	}
}

ll cnt = 0;

void dfs2(ll src){
	if(vis[src]){
		return;
	}
	vis[src] = 1;

	cnt++;
	for(auto i: adj[src]){
		ll u = i.first;
		ll w = i.second;
		if(u != parent[src]){
			dfs2(u);
		}
	}	
}


// start of CP 2.0
void solve(){
	memset(vis, 0, sizeof(vis));
	cin >> n;
	for(int i= 0;  i < n; i++){
		ll temp;
		cin >> temp;
		v.push_back(temp);
	}
	for(int i= 0; i < n-1; i++){
		ll u, w;
		cin >> u >> w;
		adj[u].push_back({i+2, w});
		adj[i+2].push_back({u, w});
	}
	dist[1] = 0;		
	dfs(1, -1);

	for(int i = 1; i <= n; i++){
		cout << dist[i] << " " <<parent[i] << endl;
		if(dist[i] > v[i-1]){
			dfs2(i);
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
 

	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}