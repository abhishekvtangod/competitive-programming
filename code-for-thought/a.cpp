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

// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };

void solve(){
	ll n, x;
	cin >> n >> x;
	unordered_map<ll,ll> um;
	// um.reserve(1048576);
	// um.max_load_factor(0.25);
	for(int i = 0; i<n;i++){
		ll tt;
		cin >> tt;
		um[tt]++;
	}
	ll fin = 0;
	if(x==0){
		for(auto it = um.begin();it!=um.end();it++){
			fin += (it->second * ((it->second) -1))/2;
		}
		cout << fin << endl;
		return;		
	}
	for(auto it = um.begin();it!=um.end();it++){
		auto j = it;j++;
		while(j!=um.end()){
			if(bits((ll)((it->first) ^ (j->first))) == x){
				fin += (it->second * j->second);
			}
			j++;
		}

	}
	cout << fin << endl;

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
		solve();
	// }
	

    return 0;
}