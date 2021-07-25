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
	int n, l, r, s;
	cin >> n >> l >> r >> s;
	l--;r--;
	vector<int> temp;
	int x = r - l + 1;
	for(int i = 1; i <= x; i++){
		temp.push_back(i);
	}
	int rem = s - x*(x+1)/2;
	
	int mn = x*(x+1)/2;
	// mx : n-x+1 ... n
	int mx = x * (2*n - x + 1) / 2;

	if(s < mn || s > mx){
		cout << -1 << endl;
		return;
	}
	int N = n;
	for(int i = temp.size() - 1; i >= 0; i--){
		if(temp[i] + rem > N){
			rem -= (N - temp[i]);
			temp[i] = N;
		} else{
			temp[i] += rem;
			rem = 0;
		}
		N--;
	}
	// debug(temp);
	vector<int> ans(n);
	set<int> st;
	int k = 0;
	int cntr = 1;
	for(int i = l; i <= r; i++){
		ans[i] = temp[k++];
		st.insert(ans[i]);
	}

	for(int i = 0; i < l ; i++){
		while(st.count(cntr)){
			cntr++;
		}
		ans[i] = cntr;
		st.insert(ans[i]);
	}

	for(int i = r+1; i < n ; i++){
		while(st.count(cntr)){
			cntr++;
		}
		ans[i] = cntr;
		st.insert(ans[i]);
	}
	debug(ans);
	



	for(auto i: ans){
		cout << i << " ";
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