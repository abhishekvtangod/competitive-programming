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

const int mxN = 2e5 + 5;
int n;
vector<int> adj[mxN];
int vis[mxN], dist[mxN];

// start of CP 2.0
void solve(){
	memset(vis, 0, sizeof(vis));
	memset(dist, 0, sizeof(dist));
	cin >> n;
	for(int i = 1; i <= n; i++){
		int temp;
		cin >> temp;
		adj[i].push_back(temp);
	}
	for(int i = 1; i <= n-1; i++){
		adj[i].push_back(i+1);
		adj[i+1].push_back(i);
	}

	queue<int> q;
	q.push(1);
	vis[1] = 1;
	while(!q.empty()){
		int src = q.front();
		q.pop();
		for(auto u: adj[src]){
			if(vis[u])continue;
			vis[u] = 1;
			dist[u] = dist[src] + 1;
			q.push(u);
		}		

	}

	for(int i = 1; i <= n; i++){
		cout << dist[i] << " ";
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