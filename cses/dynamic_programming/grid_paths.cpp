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


void solve(){
	int n;
	cin >> n;
	char arr[n+2][n+2];
	int dp[n+2][n+2];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	for(int i = 0; i<=n+1;i++){
		for(int j = 0; j<=n+1;j++){
			dp[i][j] = 0;
		}
	}
	if(arr[0][0] == '.')dp[1][1] = 1;

	for(int i = 2; i<=n; i++){
		dp[1][i] = arr[0][i-1] == '.'? dp[1][i-1]: 0;
		dp[i][1] = arr[i-1][0] == '.'? dp[i-1][1]: 0;
	}
	for(int i = 2; i <= n; i++){
		for(int j = 2; j <= n; j++){
			if(arr[i-1][j-1] == '.'){
				dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod; 
			}
		}
	}
	cout << dp[n][n] << endl;
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