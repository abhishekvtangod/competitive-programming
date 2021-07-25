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

const int mxMN = 5*1e+6;
int m, n;
int siz[mxMN], link[mxMN];

int find(int x){
	if(x == link[x]){
		return x;
	}
	return link[x] = find(link[x]);
}

void unite(int u, int v){
	int a= find(u);
	int b= find(v);
	if(a == b){
		return;
	}
	if(siz[a] > siz[b]){
		swap(a, b);
	}

	siz[a] += siz[b];
	link[b] = a;

}

void solve(){	
	cin >> n >> m;
	for(int i = 0; i <= n+5; i++){
		link[i] = i;
		siz[i] = 1;
	}
	for(int i = 0; i < m;i++){
		int k;
		cin >> k;
		if(k){
			int u;
			cin >> u;
			for(int j = 0; j < k-1; j++){
				int v;
				cin >> v;
				unite(u, v);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		cout << siz[find(i)] << " ";
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