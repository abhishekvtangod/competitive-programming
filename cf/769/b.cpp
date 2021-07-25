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

vector<pair<int, int>> v;

void solve(){
	int n;
	cin >> n;
	int visited[n+5];
	memset(visited, 0, sizeof(visited));
	int poly;
	cin >> poly;
	for(int i = 1 ; i < n; i++){
		int temp;
		cin >> temp;
		v.push_back({temp, i+1});
	}
	sort(v.begin(), v.end(), greater<pair<int, int>>());
	queue<pair<int, int>> q;
	q.push({poly, 1});
	int curr = 0;
	vector<pair<int, int>> ans;
	while(!q.empty()){
		int s = q.front().second;
		int val = q.front().first;
		q.pop();
		for(int i = 0; i < val; i++){
			if(curr > n-2){
				break;
			}
			q.push(v[curr]);
			ans.push_back({s, v[curr].second});
			// cout << s << " " << v[curr].second << endl;
			curr++;
		}

	}

	if(curr < n-1){
		cout << -1 << endl;
		return;
	}
	cout << ans.size() << endl;
	for(auto u : ans){
		cout << u.first << " " << u.second << endl;
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