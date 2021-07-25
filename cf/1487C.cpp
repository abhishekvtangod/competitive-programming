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

const int mxN = 105;
int grid[mxN][mxN];

void solve(){
	int n;
	cin >> n;
	int total = n  * (n - 1) / 2;
	int ties = total % n;
	int wins = floor(total/n);

	debug(n, total, ties, wins);
	
	if(n%2 == 1){
		for(int i = 1; i <= n; i++){
			for(int j = i+1; j <=n; j++){
				if(((i&1) != (j&1))){
					cout << 1 << " ";
				} else{
					cout << -1 << " ";
				}
			}
		}
		cout << endl;
	} else{
		for(int i = 1; i <=n; i++){
			for(int j = i+1; j <=n; j++){
				if(j == i+1 && i%2 == 1){
					cout << 0 << " ";
					continue;
				}
				if(((i&1) != (j&1))){
					cout << 1 << " ";
				} else{
					cout << -1 << " ";
				}
			}
		}
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
	cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}