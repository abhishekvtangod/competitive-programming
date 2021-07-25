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

string s;
const int mxN = 131072 + 11;
int dp[28][mxN];

int opt(char x, int a, int b){
	
	if(a == b){
		debug(x, a, b);
		return (x != s[a-1]);
	}
	int n = (b - a + 1)/2;



	int i = n - (dp[x - 'a' + 1][b/2] - dp[x - 'a' + 1][a-1]);
	int j = n - (dp[x - 'a' + 1][b] - dp[x - 'a' + 1][b/2]);
	debug(x, a, b, i, j);
	int temp1 = opt(x + 1, a, a+((b -a + 1)/2)- 1 ) +j;
	int temp2 = opt(x+1, a+(b -a + 1)/2 , b) + i;

	debug(temp1, temp2, a , b);

	return min({ temp1, temp2});
}


void solve(){
	int n;
	cin >> n;
	cin >> s;
	debug(s);
	memset(dp, 0, sizeof(dp));
	if(n == 1){
		cout << !(s[0] == 'a') << endl;
		return;
	}

	for(int i = 1; i <= 26; i++){
		for(int j = 1; j <= n; j++){
			dp[i][j] = dp[i][j - 1] + (s[j-1] == 'a' + i - 1);
		}
	}

	cout << opt('a', 1, n) << endl;



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