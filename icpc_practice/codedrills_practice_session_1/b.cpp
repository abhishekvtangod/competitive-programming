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

void solve(){
	ll n;
	cin >> n;
	vector<ll> v;
	for(int i = 0; i < n; i++){
		ll temp;
		cin >> temp;
		v.push_back(temp);
	}
	vector<pair<ll, ll>> stk;
	vector<ll> left, right;
	left.resize(n, n-1);
	right.resize(n, n-1);
	
	stk.push_back({v[0], 0});
	for(int i = 1; i < n ; i++){
		while(stk.size() > 0 && stk[stk.size()-1].first < v[i]){
			right[stk[stk.size()-1].second] = i-1;
			stk.pop_back();
		}
		stk.push_back({v[i], i});
	}
	debug(right);

	reverse(v.begin(), v.end());
	stk.clear();
	stk.push_back({v[0], 0});
	for(int i = 1; i < n ; i++){
		while(stk.size() > 0 && stk[stk.size()-1].first < v[i]){
			left[stk[stk.size()-1].second] = i-1;
			stk.pop_back();
		}
		stk.push_back({v[i], i});
	}
	for(int i = 0; i< n ; i++){
		left[i] = n -1 - left[i];
	}
	reverse(left.begin(), left.end());
	debug(left);
	for(int i = 0; i < n; i++){
		cout << left[i] << " " << right[i] << endl;
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
	cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}