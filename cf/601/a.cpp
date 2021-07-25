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

const int mxN = 406;
int g[mxN][mxN];
int vis[mxN], lev[mxN];
int n, m;
int bfs(int means){
	memset(vis, 0, sizeof(vis));
	memset(lev, -1, sizeof(lev));

	lev[1] = 0;
	vis[1] = 1;
	queue<int> q;
	q.push(1);
	while(!q.empty()){
		int src = q.front();
		q.pop();
		debug(src);
		for(int i = 1; i <= n; i++){
			if(!vis[i] && g[src][i] == means){
				vis[i] = 1;
				q.push(i);
				lev[i] = lev[src] + 1;
			}
		}
	}
	debug(lev[n]);
	return lev[n];
}

void solve(){
	memset(g, 0, sizeof(g));
	
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		g[u][v]=1;
		g[v][u]=1;
	}

	int bus = bfs(0), train = bfs(1);
	if(bus == -1 || train == -1){
		cout << -1 << endl;
	} else{
		cout << max({bus, train}) << endl;
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