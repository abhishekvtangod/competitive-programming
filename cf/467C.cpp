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

const int mxN = 5000+8;
ll dp[mxN][mxN];
ll pref[mxN], indv[mxN];
int n, m, k;

ll opt(int i, int took){
	if(i == n+1){
		if(took != k) return INT_MIN;
		return 0;
	}

	ll &res = dp[i][took];
	if(res != -1)return res;

	res = opt(i+1, took);
	if(took != k && indv[i] != -1){
		res = max({res, opt(i+m, took+1) + indv[i]});
	}

	return res;
}


void solve2(){
	memset(dp, -1, sizeof(dp));
	memset(pref, -1, sizeof(pref));
	memset(indv, -1, sizeof(indv));
	cin >> n >> m >> k;
	vector<ll> v(n);
	for(int i = 1; i<=n; i++){
		cin >> v[i-1];
		pref[i] = pref[i-1] + v[i-1];
	}
	for(int i = 1; i<=n-m+1; i++){
		indv[i] = pref[i+m-1] - pref[i-1];
	}
	
	cout << opt(1, 0) << endl;	

}


void solve(){
	memset(dp, 0, sizeof(dp));
	memset(pref, 0, sizeof(pref));
	cin >> n >> m >> k;
	vector<ll> v(n);

	for(int i = 1; i<=n; i++){
		cin >> v[i-1];
		pref[i] = pref[i-1] + v[i-1];
	}
	//dp(k, j) => max answer for kth sum ending at j
	// dp[i][j] = max(dp[i][j-1], dp[i-1][j-m] + pref[j] - pref[j-m])

	for(int i = 1 ; i <= k; i++){
		// dp[i][m] = pref[m] - pref[0];
		for(int j = m; j<=n; j++){
			dp[i][j] = max({dp[i][j-1], dp[i-1][j-m] + pref[j] - pref[j-m]});
		}
	}
	cout << dp[k][n] << endl;


}

void solve11(){
	ll n,t,t1,m,k;
    cin>>n>>m>>k;
    vector<ll> v;
    v.push_back(0);
    ll dp[501][501];
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t+v[i]);
    }

// knapsack 
    for(int i=0;i<n;i++){
        dp[0][i+1]=v[i];
    }
    
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            if(j-1-m>=0)
                dp[i][j]=max(dp[i-1][j-m]+v[j]-v[j-m],dp[i][j-1]);
        }
    }
}

int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 

	// ll t;cin>>t;
	// while(t--){
		// solve();
		// solve2();
		solve11();
	// }
	

    return 0;
}