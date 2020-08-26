/**
 *    author:  abhishekvtangod
 *    created: 
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

void solve(){
	int n;
	cin >> n;
	vector<ll> p(n);
	vector<ll> c(n);
	for(int i =0;i<n;i++){
		cin >> p[i] >> c[i];
	}

	ll dp[n][3];
	memset(dp,0,sizeof(dp));
	dp[0][1] = c[0];
	dp[0][2] = c[0] * 2;

	for(int i =1;i<n;i++){
		for(int j = 0; j <3;j++){
			ll mn = 1e18+5;
			if(j + p[i] != p[i-1]){
				mn = min({dp[i-1][0],mn});
			}
			if(j + p[i] != p[i-1]+1){
				mn = min({dp[i-1][1],mn});
			}
			if(j + p[i] != p[i-1]+2){
				mn = min({dp[i-1][2],mn});
			}
			dp[i][j] = j * c[i] + mn;
		}
	}
	ll fin = min({dp[n-1][0],dp[n-1][1],dp[n-1][2]});

	cout << fin << endl;

}


int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 

	ll t;cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}