/**
 *    author:  abhishekvtangod
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


const int mx = 2*1e5 + 11;
int n, m;
string aa = "IMPOSSIBLE";
vector<int> adj[mx];
int visited[mx], level[mx], parent[mx];


void trace(int s){
	if(s == -1){
		return;
	}
	trace(parent[s]);
	cout << s << " ";
}

void bfs(){
	memset(visited, 0, sizeof(visited));
	for(int &i: level){
		i = (1<<30);
	}
	level[1] = 1;
	queue<int> q;
	parent[1] = -1;
	q.push(1);
	visited[1] = 1;
	while(!q.empty()){
		int s = q.front();
		q.pop();
		for(auto u: adj[s]){
			if(!visited[u]){
				visited[u] = 1;
				level[u] = level[s] + 1;
				parent[u] = s;
				q.push(u);
			}
		}
	}
	if(level[n] == (1<<30)){
		cout << aa << endl;
		return;
	}
	cout << level[n] << endl;
	trace(n);

}

void solve(){
	cin >> n >> m;
	for(int i = 0; i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	bfs();
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