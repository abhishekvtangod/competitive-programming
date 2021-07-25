/**
 *    author:  abhishekvtangod
**/
// #undef _GLIBCXX_DEBUG
// #undef _ABHI
#include<bits/stdc++.h>
using namespace std; 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<pair<ll,ll>> indexed_set;

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

template <typename A>
void debug_out(string v){
	cerr << "{";
	for(auto u: v){
		cerr << u << ", ";
	}
	cerr << "}" << endl;
}

void debug_out() { cerr << "]" << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << H << ", ";
  debug_out(T...);
}

#ifdef _GLIBCXX_DEBUG
#define debug(x...) cerr << "[" << #x << "]:[", debug_out(x)
#else
#define debug(...) 42
#endif

int isP(string s){
	int n = s.size();
	for(int i = 0; i < ceil(n/2); i++){
		if(s[i] != s[n - i]){
			return 0;
		}
	}
	return 1;
}
void solve(){
	int a, b;
	cin >> a >> b;
	int n = a+b;
	string s;
	cin >> s;
	n = s.size();
	for(int i = 0; i < n; i++){
		if(s[i] == '0'){
			a--;
		} else if(s[i] == '1'){
			b--;
		}

	}
	for(int i = 0; i < ceil(n/2); i++){
		if(s[i] != s[n - i - 1]){
			if(s[i] == '?'){
				s[i] = s[n - i- 1];
				if(s[n-i- 1] == '0'){
					a--;
				} else if(s[n-i- 1] == '1'){
					b--;
				}
			} else if(s[n - i- 1] == '?'){
				s[n - i- 1] = s[i];
				if(s[i] == '0'){
					a--;
				} else if(s[i] == '1'){
					b--;
				}
			} else{
				cout << -1 << endl;
				return;
			}
		}
	}
	if(a<0 || b<0){
		cout << -1 << endl;
		return;
	}
	if(n%2 && s[(n+1)/2 -1] == '?'){
		char temp_val;
		if(a%2){
			a--;
			temp_val = '0';
		} else{
			b--;
			temp_val = '1';
		}
		s[(n+1)/2 -1] = temp_val;
	}
	for(int i = 0; i < ceil(n/2); i++){
		if(n%2 && i == ((n+1)/2 -1))continue;
		if(s[i] == '?'){
			if(a-2>=0){
				a-=2;
				s[i] = '0';
				s[n-i- 1] = '0';
			} else{
				b-=2;
				s[i] = '1';
				s[n-i- 1] = '1';

			}
		}
	}
	if(a<0 || b<0){
		cout << -1 << endl;
		return;
	}
	cout << s << endl;

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