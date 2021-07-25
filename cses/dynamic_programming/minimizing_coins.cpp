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

// state: dp[i] = min no of coins whose sum is i

const int mxX = 1e6 + 6;
int dp[mxX];

void solve(){
	int n, x;
	cin >> n >> x;
	vector<int> v(n);
	for(int i = 1; i <=x;i++){
		dp[i] = (1<<30);
	}
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	dp[0] = 0;
	for(int i = 1; i<=x; i++){
		for(int j = 0; j < n; j++){
			if(i-v[j]>=0){
				dp[i] = min({dp[i], dp[i-v[j]] + 1});
			}
		}
	}
	for(int i = 0; i <= x; i++){
		debug(dp[i], i);
	}
	if(dp[x] == (1<<30)){
		cout << -1 << endl;
		return;
	}
	cout << dp[x] << endl;

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