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

// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };

const int mxN = 1e6+6;
int dp1[mxN], dp0[mxN];

void solve(){
	memset(dp1, 0, sizeof(dp1));
	memset(dp0, 0, sizeof(dp0));
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> v;
	int z = 0,o = 0;
	for(auto u:s){
		v.push_back(u-'0');
		if(u == '0')z++;
		if(u == '1')o++;
	}
	int one = 0, zero = 0;
	
	for(int i = 0 ; i<n;i++){
		if(v[i] == 1){
			if(zero==0){
				one++;
			}
			

		}
		if(v[i] == 0){
			if(one == 0){
				zero++;
			}

		}
	}

	debug(one, zero);

}


int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 

	ll t;cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}