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
	ll n, m;
	cin >> n >> m;
	ll x, k, y;
	cin >> x >> k >> y;
	vector<ll> a, b;
	for(int i = 0; i < n; i++){
		ll temp;
		cin >> temp;
		a.push_back(temp);
	}
	for(int i = 0; i < m; i++){
		ll temp;
		cin >> temp;
		b.push_back(temp);
	}

	ll cost = 0;
	a.push_back(0);
	b.push_back(0);
	ll p1 = 0, p2 = 0, mx = -1;

	while(p1 <= m){
		ll cm = 0, sz = 0;

		while(p2<=n && a[p2] != b[p1]){
			cm = max({cm, a[p2]});
			sz++;
			p2++;
		}
		if(p2 > n){
			cout << -1 << endl;
			return;
		}
		mx = max({mx, b[p1]});
		debug(sz, mx, cm);
		if(sz){
			if(mx > cm){
				if(x < y*k){
					cost += x*(sz/k);
					cost += y*(sz%k);
				} else{
					cost += y*sz;
				}
			} else{
				if(sz<k){
					cout << -1 << endl;
					return;
				}		
				if(x < y*k){
					cost += x*(sz/k);
					cost += y*(sz%k);
				} else{
					cost += x;
					cost += (sz-k)*y;
				}
			}
		}
		mx=b[p1];
		p1++;
		p2++;
	}

	cout << cost << endl;



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