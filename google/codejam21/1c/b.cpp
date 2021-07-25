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

const ll mxY = 1e6 + 5;
vector<ll> dp;


void pre(){
	for(ll i = 1; i <= mxY; i++){
		string temp = "";
		int f = 0;
		for(ll j = i; temp.size() < 18; j++){
			string curr = to_string(j);
			if(temp.size() + curr.size() > 18){
				f = 1;
				break;
			}
			temp += to_string(j);
			dp.push_back(stoll(temp));
		}
		// dp.push_back(stoll(temp));
	}
	debug(dp.size());
	sort(dp.begin(), dp.end());
	for(int i = 0; i <  1000; i++){
		cout << dp[i] << " ";
	}
	cout << endl;
}

void solve(){
	ll n;
	cin >> n;
	ll ans = 0;
	ans = *upper_bound(dp.begin(), dp.end(), n);
	cout << ans << endl;

}

int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 
	pre();
	ll t=1;
	cin>>t;
	int i = 1;
	while(t--){
		cout << "Case #" << (i++) << ": ";
		solve();
	}
	

    return 0;
}