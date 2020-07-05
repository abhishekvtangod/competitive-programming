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
	int n,b,m;
	cin>>n>>b>>m;
	vector<int> v(m);
	for(int i =0;i<m;i++){
		cin>>v[i];
	}
	vector<int> range;
	int k =1;
	for(int i =0;i<n;){
		int j =i;
		for( ; j<i+b && j<n;j++){
			range.push_back(k);
		}
		i = j;
		
		k++;
	}
	// for(auto u:range){
	// 	cout<<u<<" ";
	// }
	// cout<<endl;
	int cnt = 1;
	int prev = range[v[0]];
	for(int i =1;i<m;i++){
		if(range[v[i]]!= prev){
			cnt++;
			prev = range[v[i]];
		}
	}
	cout<<cnt<< endl;


}

int main()
{   
	IOS;
 
 	#ifndef ONLINE_JUDGE
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 
	ll t;cin>>t;
	while(t--){
		solve();
	}
	
 
    return 0;
}