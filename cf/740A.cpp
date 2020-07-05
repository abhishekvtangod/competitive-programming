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
	ll n,a,b,c;cin>>n>>a>>b>>c;
	if(n%4==0){
		cout<<"0\n";return;
	}
	int k = ((n+4)/4)*4-n;
	if(k==1){
		cout<<min({a,3*c,c+b})<< endl;
	}
	else if(k==2){
		cout<<min({2*a,b,2*c})<< endl;
	}
	else{
		cout<<min({3*a,c,a+b})<< endl;
	}


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