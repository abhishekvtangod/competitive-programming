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
	string s;
	cin >> s;
	int r = 0, p = 0, ss = 0;
	for(int i = 0; i < s.size() ; i++){
		if(s[i] == 'R'){
			r++;
		} else if(s[i] == 'P'){
			p++;
		} else{
			ss++;
		}
	}
	debug(r, p, ss);
	char temp;
	if(r >= ss && r >= p){
		temp = 'P';
	} else if(p >= ss && p >= r){
		temp = 'S';
	} else{
		temp = 'R';
	}
	for(int i = 0; i < s.size(); i++){
		cout << temp;
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