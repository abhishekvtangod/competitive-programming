/**
 *    author:  abhishekvtangod
**/
#undef _GLIBCXX_DEBUG
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


void solve(){
	int n;
	int x = 0;
	for(int i=7;i>=0;i--){
		int t;
		cin >> t;
		x|=(t<<i);

	}
	cin >> n;
	debug(x);

    // if(n%14==0) 
    // 	n=14;
    // else
	   // n=n%14;
	
	for(int i =1;i<=n;i++){
		int a = (x<<1);
		int b = (x>>1);
		a&=((1<<8)-1);
		b&=((1<<8)-1);

		x = a ^ b;
		x = ~x;
		x&=((1<<7)-1);
		if(x&1){
			x--;
		}
		debug(x);
	}
	for(int j=7;j>=0;j--){
		cout<< ((x>>j)&1) << " ";
	}		
	cout << endl;
	debug(x);

}


int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 

	// ll t;cin>>t;
	// while(t--){
		solve();
	// }
	

    return 0;
}