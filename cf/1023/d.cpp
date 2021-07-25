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


const int mxN = 2 * 1e5 + 6;
int dp[2][mxN];

void solve(){
	memset(dp, -1, sizeof(dp));
	int n, q;
	cin >> n >> q;
	vector<int> v;
	int z = -1;
	int mx = -1;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if(temp == 0){
			z = i;
			if(i == 0){
				temp = 1;
			} else{
				temp = v[i-1];
			}
		}
		v.push_back(temp);
	}
	string aa = "YES", bb = "NO";
	for(int i = 0;i  < v.size(); i++){
		if(dp[0][v[i]] == -1){
			dp[0][v[i]] = i;
		}
		dp[1][v[i]] = i;
	}
	int mn = (1<<30);
	// int lft = -1;
	// int rt = -1;
	// int f = 0;
	// int ff = 1;
	for(int i = q; i>0; i--){
		if(dp[0][i] == -1){
			// if(ff && z>=0){
			// 	v[z] = i;
			// }
			// ff = 0;
			continue;
		}
		// ff = 0;
		for(int j = dp[0][i]; j <= dp[1][i]; j++){
			if(v[j] > i){
				j = dp[1][v[j]]+1;
			} else if(v[j] < i){
				// f = 1;
				cout << bb << endl;
				return;
			}
		}
		// lft = min(lft, dp[0][i]);
		// rt = max(rt, dp[1][i]);
	}
	debug(v);

	if(dp[0][q] == -1 && z!=-1){
		v[z] = q;
	}
	for(auto u:v){
		mx = max({mx, u});
	}
	if(mx != q){
		cout << bb << endl;
		return;
	}
	cout << aa << endl;
	for(auto u: v){
		cout << u << " ";
	}
	cout << endl;
	// for(auto u: v){
	// 	mx = max({mx, u});
	// }
	// if(mx < q){
	// 	f = 1;
	// }
	/*
	if(f || z == -1){
		cout << bb << endl;
	} else{
		cout << aa << endl;
		for(auto u: v){
			cout << u << " ";
		}
		cout << endl;
	}
	*/


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