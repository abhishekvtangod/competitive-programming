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

const int mx = 1000;
int n, m;
int visited[mx][mx];
int level[mx][mx];
vector<string> v;
pair<int, int> start, endd;

int chk(int i, int j){
	if(j < m && i < n && j>=0 && i >=0 && !visited[i][j]){
		return 1;
	}
	return 0;
}

void trace(int i, int j){
	pair<int, int> nxt;
	nxt.first = i;
	nxt.second = j;
	vector<pair<int,int>> ans;
	memset(visited, 0, sizeof(visited));

	
	while(!(i == start.first && j == start.second)){
		int temp = (1<<30);
	
		if(chk(i, j+1)){
			if(temp > level[i][j+1]){
				temp = level[i][j+1];
				nxt.first = i;
				nxt.second = j+1;
			}
		}
		if(chk(i, j-1)){
			if(temp > level[i][j-1]){
				temp = level[i][j-1];
				nxt.first = i;
				nxt.second = j-1;
			}
		}
		if(chk(i+1, j)){
			if(temp > level[i+1][j]){
				temp = level[i+1][j];
				nxt.first = i+1;
				nxt.second = j;
			}
		}
		if(chk(i-1, j)){
			if(temp > level[i-1][j]){
				temp = level[i-1][j];
				nxt.first = i-1;
				nxt.second = j;
			}
		}
		ans.push_back({i, j});
 		i = nxt.first;
		j = nxt.second;

	}
	reverse(ans.begin(), ans.end());

	for(auto u : ans){
		if(start.first == u.first){
			if(start.second > u.second){
				cout << "L";
			} else{
				cout << "R";
			}
		} else{
			if(start.first > u.first){
				cout << "U";
			} else{
				cout << "D";
			}
		}
		start = u;
	}
	cout << endl;

}

void bfs(){
	queue<pair<int, int>> q;
	level[start.first][start.second] = 0;
	q.push(start);
	while(!q.empty()){
		int si = q.front().first;
		int sj = q.front().second;
		q.pop();
		if(visited[si][sj])continue;
		visited[si][sj] = 1;
		if(chk(si, sj+1)){
			level[si][sj+1] = level[si][sj] + 1;
			q.push({si, sj+1});
		}

		if(chk(si, sj-1)){
			level[si][sj-1] = level[si][sj] + 1;
			q.push({si, sj-1});
		}
		if(chk(si+1, sj)){
			q.push({si+1, sj});
			level[si+1][sj] = level[si][sj] + 1;
		}
		if(chk(si-1, sj)){
			q.push({si-1, sj});
			level[si-1][sj] = level[si][sj] + 1;
		}
	}
	string aa = "YES" , bb = "NO";
	if(!visited[endd.first][endd.second]){
		cout << bb << endl;
		return;
	}
	cout << aa << endl;
	cout << level[endd.first][endd.second] << endl;
	trace(endd.first, endd.second);

}

void solve(){
	memset(visited, 0, sizeof(visited));
	for(int i = 0 ; i < mx; i++){
		for(int j= 0; j < mx; j++){
			level[i][j] = (1<<30);
		}
	}
	cin >> n >> m;

	for(int i = 0 ; i < n; i++){
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ;  j < m; j++){
			if(v[i][j] == '#'){
				visited[i][j] = 1;
			}
			if(v[i][j] == 'A'){
				start.first = i;
				start.second = j;
			} else if(v[i][j] == 'B'){
				endd.first = i;
				endd.second = j;
			}
		}
	}
	bfs();
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