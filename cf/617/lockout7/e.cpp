/**
 *    author:  abhishekvtangod
**/
// #undef _GLIBCXX_DEBUG
// #undef _ABHI
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a/gcd(a,b)*b  // no overflow
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

struct dsu{
	int n;
	vector<int> siz, link;
	vector<vector<int>> adj;

	void init(int nodes){
		n = nodes;
		siz.clear();
		link.clear();
		adj.clear();
		
		siz.resize(n);
		link.resize(n);
		adj.resize(n);
		for(int i = 0; i < n; i++){
			link[i] = i;
			siz[i] = 1;
		}
	}

	int find_set(int x){
		if(link[x] == x){
			return x;
		}
		return link[x] = find_set(link[x]);
	}

	int unite_sets(int a, int b){
		a = find_set(a);
		b = find_set(b);
		if(a == b){
			return 0;
		}
		adj[a].push_back(b);
		adj[b].push_back(a);
		if(siz[a] < siz[b]){
			swap(a, b);
		}
		siz[a] += siz[b];
		link[b] = a;
		return 1;
	}

};

dsu dd;
const int mxN = 2* 1e5 + 6;
map<char, int> mp;
string s;

void dfs(int src, int par){
	mp[s[src-1]]++;
	for(auto u: dd.adj[src]){
		if(u!=par){
			dfs(u, src);
		}
	}
}

// start of CP 2.0
void solve(){
	ll n, k;
	cin >> n >> k;
	cin >> s;
	dd.init(n+1);
	for(int i = 0; i < n-k; i++){
		dd.unite_sets(i+1, i+k+1);	
	}
	for(int i = 1; i <= ceil(n/2); i++){
		dd.unite_sets(i, n-i+1);
	}
	set<int> st;
	ll ans = 0;
	for(int i= 0; i < n; i++){
		int idx = dd.find_set(i+1);
		if(st.count(idx)){
			continue;
		}
		mp.clear();
		st.insert(idx);
		dfs(idx, -1);
		debug();
		ll sum = 0, mx = 0;
		char temp = 'a';
		for(auto u: mp){
			if(mx < u.second){
				mx = u.second;
				temp = u.first;
			}
			sum+=u.second;
		}
		ans += sum - mx;
		// debug(temp, sum, mx);
	}
	cout << ans << endl;
	// for(int i = 1; i <= n; i++){
	// 	debug(i, dd.adj[i]);
	// }
	// debug();
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