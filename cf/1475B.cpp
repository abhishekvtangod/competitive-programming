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

const int mxN = 1e6+6;
int dp[mxN];


void init(){
	memset(dp, -1, sizeof(dp));
	dp[2020] = 1;
	dp[2021] = 1;
	for(int i = 2022; i < 1e6+6; i++){
		dp[i] = max(dp[i - 2020], dp[i-2021]);
	}
}

void solve1(){
	int n;
	cin >> n;
	string aa = "YES", bb = "NO";
	
	debug(dp[n]);
	cout << (dp[n] == 1 ? aa : bb) << endl;

}

void solve(){
	int n;
	cin >> n;
	string aa = "YES", bb = "NO";
	
	// n = 2020 * x + 2021 * y;

	// n - 2020*x = y * k
	// n == yk (% 2020)
	int y = n % 2020;
	// x = (n - (2021 * y)) / 2020;
	int x = (n - (2021 * y)) / 2020;

	if(x >= 0 && 2020 * x + 2021 * y == n){
		cout << aa << endl;
	} else {
		cout << bb << endl;
	}


}


int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
	init(); 

	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}