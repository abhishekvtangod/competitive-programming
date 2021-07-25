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

int x1, x2, x3, x4, y11, y2, y3, y4;
int n;

int chk(int i, int j){
	if(i < 0 || j < 0 || i >= n || j >= n){
		return 0;
	}
	if(i == x1 && j == y11){
		return 0;
	}
	if(i == x2 && j == y2){
		return 0;
	}

	return 1;
}

void solve(){

	cin >> n;
	vector<pair<int, int>> v;
	for(int i = 0; i < n ;i++){
		for(int j = 0; j< n; j++){
			char t; cin >> t;
			if(t == '*'){
				v.push_back({i, j});
			}
		}
	}
	x1 = v[0].first, y11 = v[0].second;
	x2 = v[1].first, y2 = v[1].second;

	if(x1 == x2){
		if(chk(x1+1, y11) && chk(x2+1, y2)){
			x3 = x1+1; 
			y3 = y11;
			x4 = x2+1;
			y4 = y2;
		} else if(chk(x1-1, y11) && chk(x2-1, y2)){
			x3 = x1-1; 
			y3 = y11;
			x4 = x2-1;
			y4 = y2;
		}

	} else if(y11 == y2){
		if(chk(x1, y11+1) && chk(x2, y2+1)){
			y3 = y11+1; 
			x3 = x1;
			y4 = y2+1;
			x4 = x2;
		} else if(chk(x1, y11-1) && chk(x2, y2-1)){
			y3 = y11-1; 
			x3 = x1;
			y4 = y2-1;
			x4 = x2;
		}
	} else{
		x3 = x2;
		x4 = x1;
		y3 = y11;
		y4 = y2;
	}


	for(int i = 0; i < n ; i++){
		for(int j = 0; j<n; j++){
			if(i == x1 && j == y11){
				cout << "*";
			} else if(i == x2 && j == y2){
				cout << "*";
			} else if(i == x3 && j == y3){
				cout << "*";
			} else if(i == x4 && j == y4){
				cout << "*";
			} else{
				cout << ".";
			}
		}
		cout << endl;
	}


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