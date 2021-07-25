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


const int mxN = 1e5 + 9;
vector<int> v;
int n, c;

bool chk(int d){
	int cnt = 0;
	int curr = -(1<<30);
	for(int i= 0; i < n;i++){
		if(v[i] - curr >= d){
			cnt++;
			curr = v[i];
		}
	}
	if(cnt >= c){
		return true;
	}
	return false;


}

void solve(){
	cin >> n >> c;
	v.clear();
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	int lo = 0, hi = 1000000002;
	int ans = 0;
	while(lo <= hi){
		int mid = lo + (hi - lo ) / 2;
		if(chk(mid)){
			ans = mid;
			lo = mid + 1;
		} else{
			hi = mid - 1;
		}
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