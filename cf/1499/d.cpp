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

const int mxK = 2*1e7+6;
ll prime[mxK];

void sieve_of_eratosthenes(ll n){
	memset(prime, 0, sizeof(prime));
	for(ll i = 2; i < n; i++){
		if(!prime[i]){
			for(ll j = i; j < n; j += i){
				prime[j]++;
			}
		}
	}


}

void solve(){
	ll c, d, x;
	cin >> c >> d >> x;
	vector<ll> fact;

	for(ll i = 1; i*i <= x; i++){
		if(x%i==0){
			fact.push_back(i);
			if(x/i != i){
				fact.push_back(x/i);
			}
		}
	}
	ll ans = 0;
	for(ll g: fact){
		ll v = x/g;
		v+=d;
		if(v%c == 0){
			v/=c;
			// nc0 + nc1 + nc2 + ... + nc cnt[v] = 2^cnt[v]
			ans += (1LL << prime[v]);
		}
	}
	cout << ans << endl;
	
}


int main()
{   
	IOS;
	sieve_of_eratosthenes(mxK-2);

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