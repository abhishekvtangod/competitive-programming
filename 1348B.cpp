/**
 *    author:  abhishekvtangod
 *    created: 01.05.2020 20:07:49 IST       
**/
 
#include<bits/stdc++.h>
using namespace std; 
 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
 
typedef long long int ll;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<pair<ll,ll>> indexed_set;
 
 
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
 
 
// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };
 
 
 
 
void solve()
{
	ll n,k;cin>>n>>k;
	vector<ll> v;
	//ll dp[n+2];
	//memset(dp,0,sizeof(dp));
	
	set<ll> s;
	for(ll i=1;i<=n;i++)
	{
		ll x;cin>>x;
		v.push_back(x);
		//dp[i]+=dp[i-1];
		//cout<<v[i]<<" ";
		s.insert(x);
	}
	if(s.size()>k){
		cout<<"-1\n";return;
	}
	 vector<ll> final;
    if(s.size()<=k)
    {
        for(auto k:s)final.push_back(k);
    }
    while(final.size()<k)final.push_back(final[0]);
    string ans="";
    for(auto p:final)ans+=to_string(p)+" ";
    cout<<n*final.size()<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<ans;
    }
    cout<<"\n";
}
 
 
int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
 
	ll t;cin>>t;
	while(t--)
	{
		solve();
	}
	
 
    return 0;
}
