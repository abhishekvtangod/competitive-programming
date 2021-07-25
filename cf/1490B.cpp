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


void solve(){
	int n;
	cin >> n;
	int arr[3];
	memset(arr, 0, sizeof(arr));
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		arr[temp%3]++;
	}
	
	int each = n / 3;
	int cnt = 0;
	for(int i = 0; i < 10000; i++){
		if(arr[i%3] > each){
			cnt+=(arr[i%3] - each);
			arr[(i+1)%3]+=arr[i%3] - each;
			arr[i%3] = each;
			debug(i, cnt);
		}
		debug(i);
		if(arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == each){
			break;
		}
		debug(arr[0], arr[1], arr[2]);
	}
	cout << cnt  << endl;
	



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