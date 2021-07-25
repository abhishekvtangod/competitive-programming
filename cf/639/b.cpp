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


const int mxN = 1e5 + 6;
int n, d, h;


// start of CP 2.0
void solve(){
	cin >> n >> d >> h;
	if(d > 2* h){
		cout << -1 << endl;
		return;
	}

	int root = 1, last = h+1;
	int dia = d - h;
	int diaLast = last+dia;
	int rootDia = 1; 	
	if(d == 1 && n > 2){
		cout << -1 << endl;
		return;
	}
	if(dia == 0){
		rootDia = 2;
	}

	for(int i = 2; i <= last; i++){
		cout << i-1 << " " << i << endl;
	}
	
	for(int i = last+1; i <= diaLast; i++){
		if(i == last+1){
			cout << 1 << " " << i << endl;
			continue;
		}
		cout << i-1 << " " << i << endl;
	}
	for(int i = diaLast+1; i <= n; i++){
		cout << rootDia << " " << i << endl;
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