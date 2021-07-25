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

const int mxMN = 100;
ll arr[mxMN+1][mxMN+1];
vector<ll> v;
set<ll> s;
ll pref[mxMN*mxMN+3], rpref[mxMN*mxMN+3];

// start of CP 2.0
void solve(){
	memset(pref, 0, sizeof(pref));
	memset(rpref, 0, sizeof(rpref));
	ll n, m, d;
	cin >> n >> m >> d;
	for(ll i = 0; i< n; i++){
		for(ll j = 0;j < m; j++){
			cin >> arr[i][j];
			s.insert(arr[i][j]%d);
			v.push_back(arr[i][j]);
		}
	}
	if(s.size()>1){
		cout << -1 << endl;
		return;
	}
	sort(v.begin(), v.end());
	//1 based indexing for prefix
	for(ll i = 0;i < n*m; i++){
		pref[i+1] = pref[i] + v[i];
	}
	
	//1 based indexing for rev prefix
	for(ll i = n*m-1;i >=0; i--){
		rpref[i+1] = rpref[i+2] + v[i];
	}

	pref[n*m+1] = pref[n*m];
	rpref[0] = rpref[1];


	// // ========================
	// debug(v);
	// for(int i= 0; i <=n*m+1; i++){
	// 	cerr << pref[i] << " ";
	// }
	// cerr << endl;
	// for(int i= 0; i <=n*m+1; i++){
	// 	cerr << rpref[i] << " ";
	// }
	// cerr << endl;
	// // ========================


	ll mn = (1LL<<62);
	ll ans = -1;
	for(ll i = 1; i <=10000000; i++){
		ll idx = lower_bound(v.begin(), v.end(), i) - v.begin();

		ll left = pref[idx+1-1];
		ll right = rpref[idx+1];
		left = abs(i*(idx) - left);
		right = abs(i*(n*m - idx) - right);
		ll cost = left + right;
		if(cost%d ==0){
			mn = min({mn, cost/d});
		}
	}
	cout << mn << endl;


	
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