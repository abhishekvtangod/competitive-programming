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


template <typename A>
void debug_out(vector<A> v){
	cerr << "{";
	for(auto u: v){
		cerr << u << ", ";
	}
	cerr << "}" << endl;
}

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


int find_cost(int n, vector<int> v){
	int cost = 0;
	for(int i = 0; i < n - 1; i++){
		int idx = i, mn = (1<<30);
		for(int j  = i; j < n ; j++){
			if(mn > v[j]){
				mn = v[j];
				idx = j;
			}
		}
		cost += idx+1 - i;
		reverse(v.begin()+i, v.begin()+idx+1);
		// for(auto u : v){
		// 	cerr << u << " ";
		// }
		// cerr << endl;
	}
	return cost;
}

vector<vector<int>> perm;

void find_perm(vector<int> v){
	perm.push_back(v);
	
	while(next_permutation(v.begin(), v.end())){
		perm.push_back(v);
	}

}

void solve(){
	perm.clear();
	int n, c;
	cin >> n >> c;
	string aa = "IMPOSSIBLE";
	vector<int> v;
	for(int i = 1; i <= n; i++){
		v.push_back(i);
	}
	find_perm(v);
	// debug(perm.size());
	for(auto& u: perm){
		if(find_cost(n, u) == c){
			for(int i: u){
				cout << i << " ";
			}
			cout << endl;
			return;
		}
	}
	cout << aa << endl;
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
	int i = 1;
	while(t--){
		cout << "Case #"<< i++ << ": ";
		solve();
	}
	

    return 0;
}