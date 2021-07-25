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

const int mxK = 2*1e5 + 7;
int boy[mxK], girl[mxK];


ll nC2(int n){
	return (1LL * n * (n - 1)) / 2;
}

void solve(){
	int a, b, k;
	cin >> a >> b >> k;
	memset(boy, 0, sizeof(boy));
	memset(girl, 0, sizeof(girl));
	for(int i = 0 ; i < k; i++){
		int temp;
		cin >> temp;
		boy[temp]++;
	}
	for(int i = 0 ; i < k; i++){
		int temp;
		cin >> temp;
		girl[temp]++;
	}

	ll ans = nC2(k);
	for(int i = 1; i <= a; i++){
		ans -= nC2(boy[i]);
	}
	for(int i = 1; i <= b; i++){
		ans -= nC2(girl[i]);
	}
	cout << ans << endl;


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