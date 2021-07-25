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

int cnt = 0;

void solve(){
	cnt = 0;
	int n;
	cin >> n;
	vector<string> v;
	for(int i = 0; i < n; i++){
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	for(int i = 1; i < n; i++){
		if(v[i].size() == v[i-1].size()){
			int f = 0, ff = 0;
			int temp_s = v[i].size();
			for(int j = 0; j < v[i].size(); j++){
				if(v[i][j] < v[i-1][j]){
					v[i].push_back('0'); cnt++;
					f = 1;
					break;
				} else if(v[i][j] > v[i-1][j]){
					break;
				}
			}
			for(int j = 0; j < v[i].size(); j++){
				if(v[i][j] != v[i-1][j]){
					ff = 1;
				}
			}
			if(!ff){
				v[i].push_back('0'); cnt++;
			}
		} 
		else if(v[i].size() < v[i-1].size()){
			int j = 0;
			while(j<v[i].size() && v[i][j] >= v[i-1][j]){
				if(v[i][j] == v[i-1][j]){
					j++;
					continue;
				} else{
					while(v[i].size() < v[i-1].size()){
						v[i].push_back('0'); cnt++;
					}

					j= (1<<29);

				}
				j++;
			}
			if(j == v[i].size()){
				char mn = '9';
				int idx = v[i-1].size()-1;
				for(int k = v[i-1].size()-1; k >= v[i].size(); k--){
					if(mn != v[i-1][k]){
						mn = v[i-1][k];
						idx = k;
						break;
					}
				}
				if(mn == '9'){
					// v[i].push_back('1');
					while(v[i].size() < v[i-1].size()){
						v[i].push_back('0'); cnt++;
					}
					v[i].push_back('0'); cnt++;		
				} else{
					int k = v[i].size();
					while(v[i].size() < v[i-1].size()){
						if(k == idx){
							v[i].push_back(mn+1); cnt++;
							while(v[i].size() < v[i-1].size()){
								v[i].push_back('0'); cnt++;
							}
							continue;
						}
						v[i].push_back(v[i-1][k]); cnt++;
						k++;
					}
				}

			} else if( j < v[i].size()){
				while(v[i].size() < v[i-1].size()){
					v[i].push_back('0'); cnt++;
				}
				v[i].push_back('0'); cnt++;
			}
		}
	}
	debug(v);
}

void solve1(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	for(int i = 1; i < n; i++){
		while(v[i] >= v[i-1]){
			debug(v[i], v[i-1]);
			if(v[i]%10==9)
				v[i]*=10;
			v[i]+=1;
		}
		debug();
	}
	debug(v);
}


int main()
{   
	IOS;

 	#ifdef _ABHI
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 

	ll t=1;
	int i = 1;
	cin>>t;
	while(t--){
		cout << "Case #"<< i++ << ": ";
		solve();
		cout << cnt << endl;
	}
	

    return 0;
}