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

struct cmp{
	bool operator () (const pair<int, int>& a,const pair<int, int>& b) const {
		if(a.first == b.first){
			return a.second > b.second;
		}
		return a.first < b.first;
	}
};

void solve(){
	int n;
	cin >> n;
	set<pair<int, int>> idx;
	set<pair<int, int>, cmp> lrg;
	int cnt = 1;
	for(int i = 0 ; i < n ; i++){
		int x, y;
		cin >> x;
		if(x == 1){
			cin >> y;
			idx.insert({cnt, y});
			lrg.insert({y, cnt});
			cnt++;
		} else if(x == 2){
			cout << idx.begin()->first << " ";
			pair<int, int> temp = *idx.begin();
			idx.erase(temp);
			lrg.erase({temp.second, temp.first});
		} else if( x == 3){
			cout << (lrg.rbegin()->second) << " ";
			pair<int, int> temp = *lrg.rbegin();
			idx.erase({temp.second, temp.first});
			lrg.erase(temp);
		}
		
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
	// cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}