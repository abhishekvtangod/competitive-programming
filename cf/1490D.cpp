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

const int mxN = 104;
vector<int> v(mxN);
int level[mxN];

void dfs(int a, int idx, int b, int parentLevel){
	if(a > b){
		return;
	}
	debug(v[idx], idx);
	level[idx] = parentLevel+1;
	int mx = v[a], idx1 = a;
	for(int i = a; i <= idx-1; i++){
		if(mx < v[i]){
			mx = v[i];
			idx1 = i;
		}
	}
	dfs(a, idx1, idx-1, level[idx]);
	mx = v[idx+1];
	int idx2 = idx+1;
	
	for(int i = idx+1; i <= b; i++){
		if(mx < v[i]){
			mx = v[i];
			idx2 = i;
		}
	}

	dfs(idx+1, idx2, b, level[idx]);


}

void solve(){
	int n;
	cin >> n;
	memset(level, 0, sizeof(level));
	cin >> v[0];
	int mx = v[0], idx = 0;
	for(int i = 1 ; i < n; i++){
		cin >> v[i];
		if(mx < v[i]){
			mx = v[i];
			idx = i;
		}
	}

	dfs(0, idx, n-1, -1);

	debug();
	for(int i = 0; i<n;i++){
		cout << level[i] << " ";
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
	cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}