/**
 *    author:  abhishekvtangod
**/
// #undef _GLIBCXX_DEBUG
// #undef _ABHI
#include<bits/stdc++.h>
using namespace std; 

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

const int mxN = 2*1e5 + 6;

ll fact(int n){
	ll ans = 1;
	for(int i = 1; i <= n; i++){
		ans = (ans * i)%mod;
	}
	return ans%mod;
}

void solve(){
	ll n;
	cin >> n;
	vector<ll> v;
	int temp;
	cin >> temp;
	v.push_back(temp);
	ll super_mask = temp;
	for(int i = 0; i < n-1; i++){
		cin >> temp;
		v.push_back(temp);
		super_mask &= temp;
	}
	ll cnt = 0;
	for(auto u: v){
		if(u&super_mask != super_mask){
			cout << -1 << endl;
			return;
		} else if(u == super_mask){
			cnt++;
		}
	}
	debug(cnt);
	// cntC1 * cnt-1C1 * (n-2) !
	// cntC2 * 2 * (n - 2)!  			[choose 2 out of cnt, and you can swap them so * 2]
	ll ans = cnt * (cnt -1);
	ans %= mod;
	ans *= fact(n-2)%mod;
	ans%=mod;
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