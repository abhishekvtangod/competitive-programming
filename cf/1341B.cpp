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
	ll n,k;cin>>n>>k;
	ll dp[n+2]={0};
	vector<ll> v;
	for(ll i=1;i<=n;i++)
	{
		ll x;
		cin>>x;
		v.push_back(x);
	}
	for(ll i=1;i<n-1;i++)
	{
		
		dp[i] = dp[i-1];
		if(v[i-1]<v[i] && v[i]>v[i+1])dp[i]++;
	}
	//for(ll i=0;i<n;i++)cout<<dp[i]<<" ";
	//cout<<endl;
	

	ll mx=0;
	ll idx=0;
	for(ll i=0;i<n-k+1;i++)
	{
		//cout<<dp[i+k-1]-dp[i-1]<<" "<<endl;
		
		if(mx < (dp[i+k-2]-dp[i]))
		{
			
			mx =(dp[i+k-2]-dp[i]);	
			idx=i;

		}
		
	}
	//cout<<dp[k-1]<<endl;
	cout<<mx+1<<" "<<idx+1<<endl;
	//cout<<"-----\n";
	
	
	
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
