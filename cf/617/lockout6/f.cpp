/**
 *    author:  abhishekvtangod
**/
// #undef _GLIBCXX_DEBUG
// #undef _ABHI
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a/gcd(a,b)*b  // no overflow
#define bits(x) __builtin_popcountll(x)
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

string to_string(const string &s){
	return "{" + s + "}";
}

string to_string(const char &c){
	string s = "";
	s += c;
	return s;
}

template <typename A, typename B>
string to_string(const pair<A, B> &p){
	return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A, typename B, typename C>
string to_string(const tuple<A, B, C> &t){
	return "(" + to_string(get<0>(t)) + ", " + to_string(get<1>(t)) + ", " + to_string(get<2>(t)) + ")";
}

template <typename A>
string to_string(A v){
	string res = "{";
	bool f = 0;
	for(const auto &u: v){
		if(f){
			res += ", ";
		}
		f = 1;
		res += to_string(u);
	}
	res += "}";
	return res;
}

void cus_debug() { cerr << "]" << endl; }

template <typename Head, typename... Tail>
void cus_debug(Head H, Tail... T) {
  cerr << to_string(H) << ", ";
  cus_debug(T...);
}

#ifdef _GLIBCXX_DEBUG
#define debug(x...) cerr << "[" << #x << "]:[", cus_debug(x)
#else
#define debug(...) 42
#endif

const int mxN = 1e5+5;
ll dp[mxN];

ll binary_exp(ll a, ll b, ll m){
	ll ans = 1;
	while(b){
		if(b&1){
			ans = (ans * a) % m;
		}
		// b/=2;
		b = b>>1;
		a = (a * a) % m;
	}
	return ans;
}

// start of CP 2.0
void solve(){
	ll n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	for(int i = 1; i <= n; i++){
		dp[i] = dp[i-1] + (s[i-1]-'0');
	}

	for(int i = 0; i < q; i++){
		ll u, v;
		cin >> u >> v;
		ll ones = dp[v] - dp[u-1];
		ll zeroes = v-u+1 - ones;
		ll ans = 0;
		ans = (ans%mod + (binary_exp(2, ones, mod)-1)%mod)%mod;
		ans = ans + (ans*((binary_exp(2, zeroes, mod)-1)%mod))%mod;
		ans %= mod;
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
 

	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}