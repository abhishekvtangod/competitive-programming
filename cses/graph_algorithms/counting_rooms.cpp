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

// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };

const int mx = 1000+6;
int visited[mx][mx];
vector<string> v;
int n, m;

int chk(int i, int j){
	if(i<n && j<m && i>=0 && j>=0 && !visited[i][j]){
		return 1;
	}
	return 0;
}

int bfs(int i, int j){

	queue<pair<int, int>> q;
	if(!visited[i][j]){
		q.push({i, j});
	} 

	while(!q.empty()){
		
		int si = q.front().first;
		int sj = q.front().second;
		q.pop();
		if(visited[si][sj])continue;
		debug(v[si][sj], visited[si][sj], si, sj);	
		visited[si][sj] = 1;
		if(chk(si, sj+1)){
			q.push({si, sj+1});
		}
		if(chk(si, sj-1)){
			q.push({si, sj-1});
		}
		if(chk(si+1, sj)){
			q.push({si+1, sj});
		}
		if(chk(si-1, sj)){
			q.push({si-1, sj});
		}

	}
	return 1;
}

void solve(){
	memset(visited, 0, sizeof(visited));
	cin >> n >> m;
	for(int i = 0 ; i < n; i++){
		string s;
		cin >> s;
		v.push_back(s);
	}
	for(int i = 0 ; i < n ; i++){
		for(int  j = 0; j < m; j++){
			if(v[i][j] == '#'){
				visited[i][j] = 1;
			}
		
		}
	}
	
	
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < m ; j++){
			if(!visited[i][j]){
				cnt += bfs(i, j);
			}
		}
	}

	cout << cnt << endl;
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