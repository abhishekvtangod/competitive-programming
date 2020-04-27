/**
 *    author:  abhishekvtangod
 *    created: 24.04.2020 15:02:47 IST       
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




inline void solve()
{
	ll r,c;cin>>r>>c;
	ll dp[r+3][c+3]={0}, arr[r+3][c+3]={0};
	memset(dp,0,sizeof(dp));
	for(ll i=1;i<=r;i++)
	{
		for(ll j =1;j<=c;j++)
		{
			cin>>arr[i][j];

		}
	}
	ll mx=0;
	for(ll i=1;i<=r;i++)
	{
		for(ll j =1;j<=c;j++)
		{
			dp[i][j]= max(dp[i-1][j],max(dp[i-1][j-1],dp[i-1][j+1]))+arr[i][j];
			mx = max(mx,dp[i][j]);
		}
	}
	
	cout<<mx<<endl;
	
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
