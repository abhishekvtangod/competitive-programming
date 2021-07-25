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
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	string aa = "YES", bb = "NO";
	for(int i = 0; i < k; i++){
		char temp = s[i];
		for(int j = i+k; j < n; j+=k){
			if(s[j] == '?'){
				continue;
			}
			if(temp == '?'){
				temp = s[j];
				continue;
			}
			if(temp != s[j]){
				cout << bb << endl;
				return;
			}

		}
		for(int j = i+k; j < n; j+=k){
			s[j] = temp;
		}
	}
	debug(s);
	ll dpA[n+1];
	ll dpB[n+1];
	memset(dpA, 0, sizeof(dpA));
	memset(dpB, 0, sizeof(dpB));

	for(int i = 1; i <= n; i++){
		dpA[i] = dpA[i-1];
		dpB[i] = dpB[i-1];

		if(s[i-1] == '0'){
			dpA[i]++;
		} else if(s[i-1] == '1'){
			dpB[i]++;
		}
	}
	for(int i = 1; i<n+1-k+1; i++){
		ll zeroes = dpA[i+k-1] - dpA[i-1];
		ll ones = dpB[i+k-1] - dpB[i-1];
		// debug(zeroes, ones, i, i+k-1);
		if(zeroes>k/2 || ones>k/2){
			cout << bb << endl;
			return;
		}		
	}
	cout << aa << endl;


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