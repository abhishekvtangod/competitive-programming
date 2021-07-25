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

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;
oset<ll> indexed_set;


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
	ll a, b;
	vector<pair<ll, ll>> v;
	vector<pair<ll, ll>> q;
	map<pair<ll, ll>, ll> mp;
	for(int i = 0 ; i < n; i++){
		cin >> a >> b;
		mp[{a, b}] = -1;
		v.push_back({a,b});
		q.push_back({a,b});
	}
	sort(v.begin(), v.end(), [] (pair<ll, ll> &p1, pair<ll, ll> &p2)->bool{
		if(p1.first == p2.first){
			return p1.first < p2.first;
		}
		return p1.second < p2.second;
	});
	for(auto u: v){
		debug(u.first, u.second);
	}

	for(auto u:v){
		indexed_set.insert(u.first);
		ll idx = indexed_set.order_of_key(u.first) + 1;
		debug(idx, indexed_set.size());
		mp[{u.first, u.second}] = indexed_set.size() - idx;
		// cout << indexed_set.size() - idx << endl;
	}
	for(auto u: q){
		cout << mp[{u.first, u.second}] << endl;
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
		solve();
	// }
	

    return 0;
}