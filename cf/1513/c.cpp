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


// ----------------------------------------------------------------------------------
/*
const int mxM = 2*1e5+7;
ll dp[mxM];

void pre1(){
	memset(dp, 0, sizeof(dp));
	// initially the number is 10
	for(int i = 0; i <= 8; i++){
		dp[i] = 2; //10..98
	}
	dp[9] = 3; //109
	// // i>9
	// dp[i] = dp[i-9] + dp[i-10]
	for(int i = 10; i < mxM; i++){
		dp[i] = (dp[i-9] + dp[i-10])%mod;
	}

}

void solve1(){
	ll m;
	string n;
	cin >> n >> m;
	ll ans = 0;
	for(auto u: n){
		if(m + u - '0' < 10){
			ans++;
		} else{
			ans = ans + dp[m-10 + u - '0'];
		}
		ans %= mod;
	}
	cout << ans << endl;


}
*/
// ----------------------------------------------------------------------------------

// recur reln: opt(digit, remaining_operations) = opt(digit+1, remaining_operations - 1)
// if digit == 9: return opt(1, rem-1) + opt(0, rem-1); 

const int dig = 10;
const int mxOperM = 2*1e5 + 7;
ll dp[dig][mxOperM];


void pre(){
	memset(dp, 0, sizeof(dp));
	
	for(int i = 0; i < 10; i++){
		dp[i][0] = 1;
	}

	for(int i = 1; i < mxOperM; i++){
		for(int j = 0; j < 9; j++){
			dp[j][i] = dp[j+1][i-1]%mod; 
		}
		dp[9][i] = (dp[1][i-1] + dp[0][i-1])%mod;
	}

}

void solve(){
	ll m;
	string n;
	cin >> n >> m;
	ll ans = 0;
	for(auto u: n){
		ans = (ans + dp[u-'0'][m])%mod;
	}
	cout << ans << endl;

}

int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 	pre();

	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}


