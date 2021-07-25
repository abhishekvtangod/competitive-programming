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

const int mxN = 1e5+6;
const int mxA = 102;
int dp[mxA][mxA];

vector<int> adj[mxN];
vector<int> v;



void gcdd(){
	for(int i = 1; i < mxA; i++){
		for(int j = 1; j < mxA; j++){
			dp[i][j] = gcd(i, j);
		}
	}
}

vector<int> ans;
vector<int> lev;
vector<int> anc;

void dfs(int s, int p){
	for(auto u: adj[s]){
		if(u != p){
			lev[u] = lev[s] + 1;
			for(int i = 1; i <= 100; i++){
				if(dp[i][v[u]] == 1 && anc[i] != -1){
					ans[u] = max(ans[u], anc[i]);
				}
			}
			int prev = anc[v[u]];
			anc[v[u]] = lev[u];
			dfs(u, s);
			anc[v[u]] = prev;
		}
	}
}

void solve(){
    ll n, t, m;
    cin >> n;
    ans.clear(); anc.clear(); lev.clear();
    ans.resize(n, -2);
    anc.resize(102, -1);
    lev.resize(n+5, -1);
    for(int i = 0; i < mxN; i++){
    	adj[i].clear();
    }
    v.clear();
    for(int i = 0; i < n; i++){
    	int t;
    	cin >> t;
    	v.push_back(t);
    }
    for(int i = 0; i < n-1; i++){
    	int u, v;
    	cin >> u >> v;
    	u--; v--;
    	adj[u].push_back(v);
    	adj[v].push_back(u);
    }
    lev[0] = 0;
    anc[v[0]] = 0;

	dfs(0, -1);
	ans[0] = -2;
	for(auto u: ans){
		cout << u+1 <<  " ";
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
	gcdd(); 

	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}