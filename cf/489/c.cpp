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



// start of CP 2.0
void solve(){
	int m, s;
	cin >> m >> s;
	if(!s && m ==1){
		cout << 0 << " " << 0 << endl;
		return;
	}
	if(!s || s > 9*m){
		cout << -1 << " " << -1 << endl;
		return;
	}

	vector<int> ans;
	int curr = 0;
	while(curr+9 <= s){
		curr+=9;
		ans.push_back(9);
	}
	if(s - curr){
		ans.push_back(s-curr);
	}
	while(ans.size() < m){
		ans.push_back(0);
	}
	int pos = -1;
	for(int i = m-1; i >= 0; i--){
		if(i == m-1 && ans[i] == 0){
			cout << 1;
			pos = m+1;
			continue;
		}
		if(pos != -1 && ans[i]){
			pos = -1;
			cout << ans[i]-1;
			continue;
		}
		cout << ans[i];
	}
	cout << " ";

	// max
	for(int i = 0; i< m; i++){
		cout << ans[i];
	}
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
	// cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}