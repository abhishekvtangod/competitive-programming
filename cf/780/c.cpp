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

const int mxN = 2*1e5 + 6;
vector<int> adj[mxN];
int color[mxN];
int d = 1;

void dfs(int src, int par){
	int a = color[src], b = color[par], cnt = 1;	
	for(auto u: adj[src]){
		if(u != par){
			if(cnt == a || cnt == b){
				cnt = (cnt + 1)%d;
				if(!cnt)cnt = d;
			}

			if(cnt == a || cnt == b){
				cnt = (cnt + 1)%d;
				if(!cnt)cnt = d;
			}
			color[u] = cnt;
			cnt = (cnt + 1)%d;
			if(!cnt)cnt = d;	
			dfs(u, src);
		}
	}
}

// start of CP 2.0
void solve(){
	ll n;
	memset(color, 0, sizeof(color));
	cin >> n;
	for(int i = 0; i < n-1; i++){
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i = 1; i <= n; i++){
		d = max({d, (int)adj[i].size()+1});
	}
	cout << d << endl;
	color[1] = 1;
	dfs(1, -1);
	for(int i = 1; i <= n; i++){
		cout << color[i] << " ";
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