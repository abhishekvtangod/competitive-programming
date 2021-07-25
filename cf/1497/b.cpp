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


void solve(){
	ll n, m;
	cin >> n >> m;
	set<ll> v;
	ll cnt = 0, zr = 0, on = 0;
	map<int, int> mp;
	for(int i =0; i < n;i++){
		int temp;
		cin >> temp;
		if(temp%m == 0){
			zr = 1;
			continue;
		} else if(2 * (temp%m) == m){
			on = 1;
			continue;
		}
		v.insert(temp%m);
		mp[temp%m]++;
	}
	cnt = on + zr;
	debug(cnt);
	for(auto u: v){
		int x = mp[u], y = mp[m - u];
		mp[u] = 0; mp[m-u] = 0;
		int temp = 0;
		if(x > 0){
			cnt++;
			temp++;
		}
		if(abs(x-y)>1){
			cnt+= abs(x-y)-1;
			temp+= abs(x-y)-1;
		}
		cerr << u << " " << temp << endl;

	}
	cerr << endl;
	cout << cnt << endl;



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