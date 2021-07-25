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

const int mxN = 1e5 + 6;
const int mxQ = 1e5 + 6;

int dp[11][105][105], cnt[11][105][105];

void solve(){
	memset(dp, 0, sizeof(dp));
	memset(cnt, 0, sizeof(cnt));

	int n, q, c;
	cin >> n >> q >> c;
	for(int i = 0; i < n; i++){
		int x, y, s;
		cin >> x >> y >> s;
		dp[s][x][y]++;
	}

	for(int i = 0 ; i <= c; i++){
		for(int j = 1 ; j < 105;j++){
			for(int k = 1; k < 105; k++){
				cnt[i][j][k] = cnt[i][j][k] + cnt[i][j-1][k] + cnt[i][j][k-1] - cnt[i][j-1][k-1] + dp[i][j][k]; 
			}
		}
	}


	for(int i = 0 ; i < q; i++){
		int x1, y1, x2, y2, t;
		cin >> t >> x1 >> y1 >> x2 >> y2;
		int ans = 0;
		for(int j = 0; j <= c; j++){
			ans = ans + (cnt[j][x2][y2] - cnt[j][x2][y1-1] - cnt[j][x1-1][y2] + cnt[j][x1-1][y1-1]) * ((j+t)%(c+1));
		}
		cout << ans << endl;



	}
	


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