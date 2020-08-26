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
	int n;
	cin >> n;
	vector<ll> p(n);
	vector<ll> c(n);
	for(int i =0;i<n;i++){
		cin >> p[i];
	}
	for(int i =0;i<n;i++){
		cin >> c[i];
	}
	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
	unordered_map<ll,ll> mp;
	for(int i=0;i<n;i++){
		pq.push({p[i],c[i]});
		mp[p[i]]++;
	}
	ll cnt = 0;
	while(!pq.empty()){
		int x = pq.top().first;
		int y = pq.top().second;
		pq.pop();
		// debug(x);
		if(mp[x] >1){
			mp[x]--;
			mp[x+1]++;
			pq.push({x+1,y});
			cnt+=(y);
		} 
		// else{
		// 	debug(x,y);
		// }
	}
	cout << cnt << endl;

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