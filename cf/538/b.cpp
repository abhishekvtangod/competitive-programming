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

const int mxN = 1e6;
int n;
const int mxS = pow(2, 6) + 1;


// state: dp[i][j] is ith number in array is used till now to make sum j
ll dp[mxN+1];
ll parent[mxN+1];
void init(){
	for(int j = 0; j <= mxN; j++){
			dp[j] = (1<<30);
			parent[j]=j;
	}
}

vector<int> v;

void generate(int n){
	if(n > mxN){
		return;
	}
	v.push_back(n);
	if(n){
		generate(n*10);
	}
	generate(n*10+1);
}

void trace(int n){
	if(!n){
		return;
	}
	// debug(n, parent[n]);
	cout << n - parent[n] << " ";
	trace(parent[n]);
}
// state: dp[i] : minimum number of elements used to make sum i

// start of CP 2.0
void solve(){
 	generate(0);
	cin >> n;
	init();
	dp[0] = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < v.size(); j++){
			if(i - v[j] < 0){
				// dp[j][i] = dp[j-1][i];
				continue;
			}
			if(dp[i] > dp[i-v[j]] + 1){
				dp[i] = 1 + dp[i-v[j]];
				parent[i] = i-v[j];
			}
			// dp[i] = min({1LL + dp[i - v[j]] , dp[i]});
		}
	}
	if(dp[n] == (1<<30)){
		cout << -1 << endl;
		return;
	}

	cout << dp[n] << endl;
	trace(n);
	
}

void solve1(){
	int n;
	cin >> n;
	vector<int> v;
	while(n){
		int temp_n = n, m = 0, p = 1;
		while(temp_n){

			if(temp_n%10){
				m+=p;
			} 
			// debug(temp_n, m);
			p*=10;
			temp_n/=10;
			
		}
		// cout << m << " ";
		v.push_back(m);
		n -= m;
	}
	cout << v.size() << endl;
	for(auto u: v)cout << u << " ";
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
		solve1();
		// solve();
	}
	

    return 0;
}