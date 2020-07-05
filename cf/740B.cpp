/**
 *    author:  abhishekvtangod
 *    created:        
**/
 
#include<bits/stdc++.h>
using namespace std; 
 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define debug(x) cerr<<#x<<": "<<x<<" "<< endl;
 
typedef long long int ll;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<pair<ll,ll>> indexed_set;
 
// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };
 
void solve(){
	int n,m;cin>>n>>m;
	vector<int> v(n+1,0);
	int dp[n+1];
	dp[0] = 0;
	for(int i =1;i<=n;i++){
		cin>>v[i];
		dp[i] = dp[i-1]+v[i];
	}
	ll ans = 0;
	for(int i =0;i<m;i++){
		int l,r;cin>>l>>r;
		int sum = dp[r]-dp[l-1];
		if(sum>0){
			ans+=sum;
		}
	}
	cout<<ans<< endl;
}
 
int main()
{   
	IOS;
 
 	#ifndef ONLINE_JUDGE
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 
	// ll t;cin>>t;
	// while(t--){
		solve();
	// }
	
 
    return 0;
}