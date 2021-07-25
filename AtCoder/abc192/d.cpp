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

const ll mxN = 65;
const ll mxM = 1e18+6;

void solve(){
	string s;
	ll m;
	cin >> s;
	cin >> m;
	int n = s.size();
	char mx = '0';
	for(char i: s){
		mx = max({mx, i});
	}
	ll d = mx - '0';
	reverse(s.begin(), s.end());
	ll ans = (1LL<<63) - 1, cnt = 0;

	ll mxVal =0;
	for(ll j = 0 ; j < n; j++){
		mxVal += 1LL * pow(9, j) * (s[j] - '0');
	}
	ll i = mxVal;
	if(i < 0){
		i = 1e18+1;
	}
	// debug(i, d, ans);
	while(ans > m){
		if(i < d+1){
			break;
		}
		ans = 0;
		for(ll j = 0 ; j < n; j++){
			ans += 1LL * pow(i, j) * (s[j] - '0');
		}
		debug(ans);
		if(ans <= m){
			break;
		}
		i--;
	}
	cout << i - d << endl;

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