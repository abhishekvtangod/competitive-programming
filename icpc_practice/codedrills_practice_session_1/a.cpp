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

const int mxN = 1e6+5;
ll fac[mxN];

void pre(){

	fac[0] = 1;
	for(int i = 1; i < mxN;i++){
		fac[i] = (fac[i-1]%mod * i%mod)%mod;
	}	
}

ll binary_exp(ll a, ll b,ll k){
	ll ans = 1;
	while(b){
		if(b&1){
			ans = (ans * a) % k;
		}
		// b/=2;
		b = b>>1;
		a = (a * a) % k;
	}
	return ans;
}

ll modInverse(ll n){
	return binary_exp(n, mod-2, mod);
}

ll nCr(int n, int r){
	if(n < r){
		return 1;
	}
	if(!r)return 1;
	ll ans = fac[n] * modInverse(fac[n-r])%mod *  modInverse(fac[r])%mod;
	return ans;
}


void solve(){
	ll n, k, g;
	cin >> n >> k >> g;
	ll pg = n/g;
	if(n-k < pg){
		cout << 1 << endl;
		return;
	}
	ll right = (g * nCr(n-k-1, pg-1)%mod * binary_exp(fac[pg], g, mod)%mod * fac[g])%mod;
	ll left  = fac[n];
	ll ans = (left - right + mod)%mod;
	ans = (ans * modInverse(fac[n]))%mod;
	cout << ans << endl;


}

int main()
{   
	IOS;
	pre();
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