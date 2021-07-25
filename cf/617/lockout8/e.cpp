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
	// int flag = 0;
	
	string s;
	cin >> s;
	vector<char> ans(55, '0');
	int j = 27;
	ans[j] = s[0];
	// debug(ans, ans.size());

	int vis[27];
	memset(vis, 0, sizeof(vis));
	
	vis[s[0]-'a'] = 1;
	for(int i = 1; i < s.size(); i++){
		// debug()
		if(vis[s[i]-'a']){
			if(ans[j-1] == s[i]){
				j--;
			} else if(ans[j+1] == s[i]){
				j++;
			} else{
				cout << "NO" << endl;
				return;
			}
		} else{
			vis[s[i]-'a'] = 1;
			if(ans[j+1] == '0'){
				ans[j+1] = s[i];
				j++;
			} else if(ans[j-1] == '0'){
				ans[j-1] = s[i];
				j--;
			} else{
				cout << "NO" << endl;
				return;
			}
		}

	}
	string fin = "";
	for(auto u: ans){
		if(u != '0'){
			fin += u;
		}
	}
	for(int i = 0; i < 26; i++){
		if(!vis[i]){
			char temp = i+'a';
			fin += temp;
		}
	}
	cout << "YES" << endl;
	cout << fin << endl;

	// if(flag){
	// 	cout << "NO" << endl;
	// } else{
	// 	cout << "YES" << endl;
	// 	cout << ans << endl;
	// }


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