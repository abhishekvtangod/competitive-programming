/**
 *    author:  abhishekvtangod
 *    created: 
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

int visited[25][25];
vector<char> r,c;	
int n,m;

void dfs(int i,int j){
	if(i<0 || j <0|| i>n-1 || j>m-1 || visited[i][j]){
		return;
	}

	visited[i][j] = 1;
	if(c[j] == '^'){
		dfs(i-1,j);
	}
	else if(c[j] == 'v'){
		dfs(i+1,j);
	}
	if(r[i] == '<'){
		dfs(i,j-1);
	}
	else if(r[i] == '>'){
		dfs(i,j+1);
	}
}

void solve(){
	cin >> n >> m;
	char t;
	for(int i =0 ;i<n;i++){
		cin >> t;
		r.push_back(t);
	}
	for(int i =0 ;i<m;i++){
		cin >> t;
		c.push_back(t);
	}
	dfs(2,2);

	for(int k=0;k<n;k++){
		for(int kk=0;kk<m;kk++){
			memset(visited,0,sizeof(visited));
			dfs(k,kk);
			for(int i =0;i<n;i++){
				for(int j=0;j<m;j++){
					if(visited[i][j] == 0){
						cout << "NO" << endl;return;
					}
				}
			}


		}
	}
	cout << "YES" << endl;


}

void solve1(){
	cin >> n >> m;
	string a,b;
	cin >> a;
	cin >> b;

	string tmp = "";
	tmp += a[0];
	tmp += a[n-1];
	tmp += b[0];
	tmp += b[m-1];
	// cout << tmp << endl;
	if(tmp == "<>v^" || tmp == "><^v"){
		//outer cycle
		cout << "YES" << endl;
 	}
 	else{
 		cout << "NO" << endl;
 	}

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
		// solve();
		solve1();
	// }
	

    return 0;
}