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


 // it was always true that after some modification of the order of letters in alphabet, 
// the order of authors becomes lexicographical!
string aa = "Impossible";
const int mxN = 1e4 + 4;
// vector<int> adj[mxN];
// vector<int> visited(mxN, 0);
// vector<int> ans;

// int dfs(int s){
// 	int cyc = 0;
// 	visited[s] = 1;
// 	for(auto u: adj[s]){
// 		if(!visited[u]){
// 			cyc = max({cyc, dfs(u)});
// 		} else if(visited[u] == 1){
// 			cyc = 1; //cycle exists in DAG
// 		}
// 	}
// 	visited[s] = 2;
// 	ans.push_back(s);
// 	return cyc;
// }


struct topo_sort{
	vector<vector<int>> adj;
	int n;
	vector<int> visited;
	vector<int> ans;

	void init(int sz){
		n = sz;
		visited.resize(n);
		adj.resize(n);
		for(auto& u: visited){
			u = 0;
		}
	}

	int dfs(int s){
		int cyc = 0;
		visited[s] = 1;
		for(auto u: adj[s]){
			if(!visited[u]){
				cyc = max({cyc, dfs(u)});
			} else if(visited[u] == 1){
				cyc = 1; //cycle exists in DAG
			}
		}
		visited[s] = 2;
		ans.push_back(s);
		return cyc;
	}

	// if dfs returns 1, they cycle exists in DAG, so no topo_sort

	// topo_sort order: reverse of ans
	void topo_order(){
		reverse(ans.begin(), ans.end());
		for(auto u: ans){
			cout << (char)(u+'a') << "";
		}
		cout << endl;
	}

};
topo_sort tp;

void solve(){
	int n;
	cin >> n;
	tp.init(mxN);
	vector<string> v;
	for(int i = 0; i < n; i++){
		string temp;
		cin >> temp;
		v.push_back(temp);
	}

	for(int i= 0; i < n-1; i++){
		int f = 0;
		for(int j = 0; j< min(v[i].size(), v[i+1].size()); j++){
			if(v[i][j] == v[i+1][j]){
				f = 1;
				continue;
			} else{
				f = 0;
				tp.adj[v[i][j]-'a'].push_back(v[i+1][j]-'a');
				break;
			}
		}
		if(f && v[i].size() > v[i+1].size()){
			cout << aa << endl;
			return;
		}
	}
	for(int i = 0; i <='z'-'a'; i++){
		if(!tp.visited[i]){
			int cyc = tp.dfs(i);
			if(cyc){
				cout << aa <<endl;
				return; 
			}
		}
	}
	tp.topo_order();



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