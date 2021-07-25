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
	vector<pair<ll, ll>> finn;
	cin >> n;
	string a, b;
	cin >> a >> b;
	ll cntA = 0, cntB = 0;
	for(auto u: a){
		if(u == 'a'){
			cntA++;
		} else{
			cntB++;
		}
	}
	for(auto u: b){
		if(u == 'a'){
			cntA++;
		} else{
			cntB++;
		}
	}
	if(cntA%2 || cntB%2){
		cout << -1 << endl;
		return;
	}
	ll cnt = 0;
	cntA = 0;
	cntB = 0;
	ll prevA = -1, prevB = -1;
	for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
			// debug(i, prevA, prevB);
			// debug(a, b);
			if(a[i] == 'a' && prevA != -1){
				// debug(a[i], a[prevA]);
				// debug(b[i], b[prevA]);
				swap(a[i], b[prevA]);
				// debug(a[i], a[prevA]);
				// debug(b[i], b[prevA]);
				// cout << i+1 << " " << prevA+1 << endl;
				finn.push_back({i+1, prevA+1});
				prevA = -1;
			} else if(a[i] == 'a' && b[i] == 'b'){
				prevA = i;
			} else if(a[i] == 'b' && prevB != -1){
				swap(a[i], b[prevB]);
				finn.push_back({i+1, prevB+1});
				// cout << i+1 << " " << prevB+1 << endl;
				prevB = -1;
			} else if(a[i] == 'b' && b[i] == 'a'){
				prevB = i;
			}

			// debug(i, prevA, prevB);
			// debug(a);
			// debug(b);
		}
	}
	// debug(a);
	// debug(b);
	ll idx = -1;
	vector<ll> idxx;
	for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
			idxx.push_back(i);
		}
	}
	if(idxx.size()){
		finn.push_back({idxx[0]+1, idxx[0]+1});
		finn.push_back({idxx[0]+1, idxx[1]+1});

		// cout << idxx[0] << " " << idxx[0] << endl;
		// cout << idxx[0] << " " << idxx[1] << endl;
		swap(a[idxx[0]], b[idxx[0]]);
		swap(a[idxx[0]], b[idxx[1]]);
	}

	cout << finn.size() << endl;
	for(auto u: finn){
		cout << u.first << " " << u.second << endl;
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