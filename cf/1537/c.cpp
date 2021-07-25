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



// start of CP 2.0
void solve(){
	ll n;
	cin >> n;
	vector<ll> v;
	for(int i = 0; i < n; i++){
		ll temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	ll mn = (1LL<<62), a = -1, b = -1;
	for(int i = 0; i < n-1; i++){
		if(v[i+1] - v[i] < mn){
			mn = v[i+1] - v[i];
			a = i;
			b = i+1;
		}
	}
	debug(mn, a, b);
	// ll inc = a + n - b;
	cout << v[a] << " ";
	vector<ll> va, vb;
	for(int i = 0; i < n; i++){
		if(i == a || i == b)continue;
		if(v[i] > v[a]){
			va.push_back(v[i]);
		} else{
			vb.push_back(v[i]);
		}
	}
	for(auto u: va){
		cout << u << " ";
	}
	for(auto u: vb){
		cout << u << " ";
	}
	cout << v[b] ;
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