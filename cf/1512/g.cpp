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


const int mxN = 1e7 + 1;
ll dv[mxN], cnt[mxN];

void sv(){
	memset(dv, 0, sizeof(dv));
	// memset(cnt, 0, sizeof(cnt));

	for(int i= 1; i < mxN; i++){
		for(int j = i; j < mxN; j+=i){
			dv[j]+=i;
		}
	}
	for(int i = mxN - 1; i >= 1; i--){
		// mp[dv[i]] = i;
		if(dv[i] < mxN){
			cnt[dv[i]] = i;
		}

	}

	// ll mx = -1;
	// for(auto u: dv){
	// 	mx = max(mx, u);
	// }
	// debug(mx);

}

void solve(){
	int c;
	cin >> c;
	int ans;
	ans = cnt[c];
	debug(ans);
	if(ans == 0){
		cout << -1  << endl;
	} else{
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
 	sv();

	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}