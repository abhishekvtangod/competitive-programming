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

const int mxN = 2 * 1e5 + 6;
vector<pair<ll, ll>> v;
ll dp[mxN];

void solve(){
	ll n;
	cin >> n;
	v.clear();
	memset(dp, 0, sizeof(dp));
	for(ll i = 0 ; i <n; i++){
		ll temp;
		cin >> temp;
		v.push_back({temp, i});
	}
	sort(v.begin(), v.end(), [](const pair<ll, ll>& p1,const pair<ll, ll>& p2)->bool{
		if(p1.first == p2.first){
			return p1.second < p2.second;
		}
		return p1.first > p2.first; 
	});

	dp[n] = 0;
	for(int i = n-1 ; i >=0; i--){
		dp[i] = dp[i+1] + v[i].first;
		// debug(i, dp[i], v[i]);
	}
	debug();
	vector<ll> ans;
	ans.push_back(v[0].second);
	for(int i = 0; i < n; i++){
		debug(v[i].first, dp[i+1], i);
		if(v[i].first <=dp[i+1]){
			ans.push_back(v[i+1].second);
		} else{
			break;
		}

	}
	cout << ans.size() << endl;
	sort(ans.begin(), ans.end());
	for(ll i: ans){
		cout << i + 1 << " ";
	}
	cout << endl;


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