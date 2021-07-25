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

string to_string(const string &s){
	return "{" + s + "}";
}

string to_string(const char &c){
	string s = "";
	s += c;
	return s;
}

template <typename A, typename B>
string to_string(const pair<A, B> &p){
	return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A, typename B, typename C>
string to_string(const tuple<A, B, C> &t){
	return "(" + to_string(get<0>(t)) + ", " + to_string(get<1>(t)) + ", " + to_string(get<2>(t)) + ")";
}

template <typename A>
string to_string(A v){
	string res = "{";
	bool f = 0;
	for(const auto &u: v){
		if(f){
			res += ", ";
		}
		f = 1;
		res += to_string(u);
	}
	res += "}";
	return res;
}

void cus_debug() { cerr << "]" << endl; }

template <typename Head, typename... Tail>
void cus_debug(Head H, Tail... T) {
  cerr << to_string(H) << ", ";
  cus_debug(T...);
}

#ifdef _GLIBCXX_DEBUG
#define debug(x...) cerr << "[" << #x << "]:[", cus_debug(x)
#else
#define debug(...) 42
#endif

const int mxMN = 55;
char arr[mxMN][mxMN];
int vis[mxMN][mxMN];
int n, m, k;
vector<pair<int, pair<int, int>>> v;
int chk(int x, int y){
	if(x < n && y < m && x >= 0 && y >= 0 && !vis[x][y]){
		return 1;
	}
	return 0;
}

int chk2(int x, int y){
	if(x < n && y < m && x >= 0 && y >= 0 && arr[x][y] == '.'){
		return 1;
	}
	return 0;
}
int dfs(int x, int y){
	int cnt = 1;
	vis[x][y] = 1;
	if(chk(x+1, y)){
		cnt += dfs(x+1, y);
	}
	if(chk(x-1, y)){
		cnt += dfs(x-1, y);
	}
	if(chk(x, y+1)){
		cnt += dfs(x, y+1);
	}
	if(chk(x, y-1)){
		cnt += dfs(x, y-1);
	}
	return cnt;
}

void dfs2(int x, int y){
	arr[x][y] = '*';
	if(chk2(x+1, y)){
		dfs2(x+1, y);
	}
	if(chk2(x-1, y)){
		dfs2(x-1, y);
	}
	if(chk2(x, y+1)){
		dfs2(x, y+1);
	}
	if(chk2(x, y-1)){
		dfs2(x, y-1);
	}
	
}

// start of CP 2.0
void solve(){
	memset(vis, 0, sizeof(vis));
	// int n, m, k;
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
			if(arr[i][j] == '*'){
				vis[i][j] = 1;
			}
		}
	}
	for(int i = 0;i < n; i++){
		if(chk(i, 0)){
			dfs(i, 0);
		}
		if(chk(i, m-1)){
			dfs(i, m-1);
		}
	}
	for(int i = 0;i < m; i++){
		if(chk(0, i)){
			dfs(0, i);
		}
		if(chk(n-1, i)){
			dfs(n-1, i);
		}
	}
	for(int i = 1; i < n-1; i++){
		for(int j = 1; j < m-1;j++){
			// int temp = 0;
			if(chk(i, j)){
				int temp = dfs(i, j);
				v.push_back({temp, {i, j}});
			}
		}
	}
	sort(v.begin(), v.end());
	int currLakes = v.size();
	int toRemove = currLakes - k;
	debug(currLakes, v);
	int cells = 0;
	for(int i = 0; i < toRemove; i++){
		cells += v[i].first;
		dfs2(v[i].second.first, v[i].second.second);
	}
	cout << cells << endl;
	for(int i=0; i <n; i++){
		for(int j = 0; j < m; j++){
			cout << arr[i][j];
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
	// cin>>t;
	while(t--){
		solve();
	}
	

    return 0;
}