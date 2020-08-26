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
	string s; 
	cin >> s;
	if(s==""){
		cout << 0 << endl;
		return;
	}
	int n = s.size();
	int dp[n][n];
	memset(dp,0,sizeof(dp));
    for (int sz = 0; sz < n;sz++){
        for (int fst = 0; fst < n-sz; fst++){
            int lst = fst + sz;
            dp[fst][lst] = sz + 1;
            for (int k = fst + 1; k <= lst; ++k) {
                int steps = dp[fst][k-1] + dp[k][lst] - ((int)(s[k-1] == s[lst]));
                dp[fst][lst] = min(dp[fst][lst], steps);
            }
        }
    }

	cout << dp[0][n-1] << endl;

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