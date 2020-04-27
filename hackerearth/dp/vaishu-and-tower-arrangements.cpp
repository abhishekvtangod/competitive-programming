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
	ll n;cin>>n;
	vector<ll> v;
	ll x;
	ll dpp[n+2]={0},dpn[n+2]={0};

	
	
	for(ll i=1; i<=n;i++)
	{
		cin>>x;
		dpp[i]=dpp[i-1];
		if(x==1)dpp[i]++;
		
		v.push_back(x);
	}
	
	for(ll i=n;i>=1;i--)
	{
		dpn[i]=dpn[i+1];
		if(v[i-1] ==-1)dpn[i]++;
	}
	ll ans=1e9+5;
	
	for(ll i=1;i<n;i++)
	{
		
		ans=min(ans,dpp[i]+dpn[i+1]);
	}
	//for(ll i=0;i<n+2;i++)cout<<dpp[i]<<" ";cout<<endl;
	//for(ll i=0;i<n+2;i++)cout<<dpn[i]<<" ";cout<<endl;
	cout<<ans<<'\n';

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
