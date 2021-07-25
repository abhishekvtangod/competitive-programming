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

const int mxN = 1e5+6;
ll dp[mxN][2];

void solve(){
	for(int i = 0; i < mxN; i++){
		for(int j = 0;j < 2; j++){
			dp[i][j] = (1LL << 62);
		}
	}
	ll n;
	cin >> n;
	vector<ll> c;
	for(int i = 0; i < n; i++){
		ll temp;
		cin >> temp;
		c.push_back(temp);
	}
	vector<pair<string, string>> v;
	string temp, rev;
	for(int i =0; i < n; i++){
		cin >> temp;
		rev = temp;
		reverse(rev.begin(), rev.end());
		v.push_back({temp, rev});

	}
	dp[0][0] = 0;
	dp[0][1] = c[0];
	for(int i = 1; i < n; i++){
		//rev
		if(v[i-1].first <= v[i].second){
			dp[i][1] = dp[i-1][0] + c[i];
		}
		if(v[i-1].second <= v[i].second){
			dp[i][1] = min({dp[i][1], dp[i-1][1] + c[i]});
		}
		
		//donn rev
		if(v[i-1].first <= v[i].first){
			dp[i][0] = dp[i-1][0];
		}
		if(v[i-1].second <= v[i].first){
			dp[i][0] = min({dp[i][0], dp[i-1][1]});
		}
	}
	for(int i = 0; i < n; i++){
		debug(dp[i][0], dp[i][1]);
	}
	ll re = min({dp[n-1][0], dp[n-1][1]});
	if(re == (1LL << 62)){
		re = -1;
	}
	cout << re << endl;

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