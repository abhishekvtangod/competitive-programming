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
void debug_out(vector<A> v){
	cerr << "{";
	for(auto u: v){
		cerr << u << ", ";
	}
	cerr << "}]" << endl;
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


void solve(){
	int x, y;
	cin >> x >> y;
	string s;
	cin >> s;
	int n = s.size();
	vector<char> v;
	for(int i = 0; i < n;){
		if(s[i] == 'C' || s[i] == 'J'){
			v.push_back(s[i]);
			i++;
			continue;
		}
		int cnt = 0;
		while(i < n && s[i] == '?'){
			cnt++;
			i++;
		}
		v.push_back(cnt+'0');
	}
	debug(v);
	int cost = 0;
	for(int i = 1; i < v.size()-1 ;i++){
		if(v[i] != 'C' && v[i] != 'J'){
			int cnt = v[i] - '0';
			if(v[i-1] != v[i+1]){
				if(v[i-1] == 'C' && v[i+1] == 'J'){
					cost += x;
				} else{
					cost += y;
				}
			}
		}
	}
	for(int i = 0;i < n-1 ;i++){
		if(s[i] == 'C' && s[i+1] == 'J'){
			cost+=x;
		} else if(s[i] == 'J' && s[i+1] == 'C'){
			cost+=y;
		}
	}

	cout << cost << endl;
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
	int i = 1;
	while(t--){
		cout << "Case #"<< i++ << ": ";
		solve();
	}
	

    return 0;
}