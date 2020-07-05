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
	int n,k;
	cin>>n>>k;
	vector<ll> v,w;
	for(int i =0;i<n;i++){
		ll t;cin>>t;
		v.push_back(t);
	}
	vector<vector<int>> bkt(k);

	for(int i =0;i<k;i++){
		ll t;cin>>t;
		w.push_back(t);
		bkt[k].resize(t,0);
	}
	// sort(v.begin(),v.end());
	// sort(w.begin(),w.begin());
	// ll ans = 0;
	// for(;i>=0;i--){
	// 	ans+=v[i];
	// }
	// int i = n-1;
	// int temp = 0;
	// for(;i>=0;i--){
	// 	bkt[temp].push_back(v[i]);
	// 	temp++;
	// 	if(temp == k){
	// 		temp= 0;
	// 	}
	// }
	// for(int i = 0;i<k;i++){
	// 	ans+=(bkt[i][bkt[i].size()-1]) + bkt[i][0];
	// }
	for(int i = 0;i<k;i++){
		for(auto x:bkt[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	// cout<<ans<< endl;

}

void solve1()
{
    ll n,t,f;cin>>n>>f;
    vector<ll> can,fri;for(int i=0;i<n;i++){cin>>t;can.push_back(t);}
    for(int i=0;i<f;i++){cin>>t;fri.push_back(t);}
    sort(can.begin(),can.end());
    sort(fri.begin(),fri.end(),greater<ll> ());
    ll happy=0,j=0;
    auto i=can.rbegin();
    
    vector<ll>hap;
    for(j=0;j<f;j++)
    {
        happy+=*i;
        hap.push_back(*i);
        i++;
    }
    ll pre=-1;j=0;
    for(ll ii=0;ii<n && j<f;)
    {
        if(fri[j]==1)break;
        happy+=can[ii];
        if(fri[j]==1)break;
        ii+=(fri[j]-1);j++;
    }  
    ll p=0;
    for(;j<f;j++,p++)happy+=hap[p];
    j=0;
 
    cout<<happy<<"\n";
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