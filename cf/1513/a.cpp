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

const int mxN = 106;
int n, k;
vector<int> v;

void solve(){
	cin >> n >> k;
	v.clear();
	v.resize(n, -1);
	int mxK = (n-1) / 2;
	int tempK = 0;

	if(k > mxK){
		cout << -1 << endl;
		return;
	}
	int cnt = n-k+1;
	for(int i = 1; i < n && tempK < k; i+=2, tempK++){
		v[i] = cnt++;
	}
	cnt = 1;
	for(int i = 0; i < n; i++){
		if(v[i] == -1){
			v[i] = cnt++;
		}
	}

	for(auto u: v){
		cout << u << " ";
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