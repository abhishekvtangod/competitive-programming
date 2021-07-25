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


void solve(){
	int n;
	cin >> n;
	vector<int> b;
	for(int i= 0; i < n+2; i++){
		int temp;
		cin >> temp;
		b.push_back(temp);
	}	
	sort(b.begin(), b.end());
	ll sum = 0;
	for(int i = 0; i < n+1; i++){
		sum+= b[i];
	}

	for(int i = 0; i < n +1; i++){
		if(sum-b[i] == b[n+1]){
			for(int j = 0; j < n+1; j++){
				if(j != i){
					cout << b[j] << " ";
				}
			}

			cout << endl;
			return;

		}
	}
	// sum += b[n+1];
	sum -= b[n];
	// swap(b[n], b[n+1]);
	// for(int i = 0; i < n +1; i++){
	// 	if(sum-b[i] == b[n+1]){
	// 		for(int j = 0; j < n+1; j++){
	// 			if(j != i){
	// 				cout << b[j] << " ";
	// 			}
	// 		}
	// 		cout << endl;
	// 		return;
	// 	}
	// }
	if(sum == b[n]){
		for(int j = 0; j < n; j++){
			cout << b[j] << " ";
		}
		cout << endl;
		return;
	}
	cout << -1 << endl;
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