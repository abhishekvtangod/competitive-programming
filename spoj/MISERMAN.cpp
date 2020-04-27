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
	ll r,c;cin>>r>>c;
	ll dp[r+5][c+5],arr[r+5][c+5];
	memset(dp,0,sizeof(dp));
	
	for(ll i =1;i<=r;i++)
	{
		for(ll j=1;j<=c;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	
	
	for(ll i =1;i<=r;i++)
	{
		for(ll j=1;j<=c;j++)
		{
			if(j==1)
			{
				dp[i][j] = min(dp[i-1][j],dp[i-1][j+1])+arr[i][j];

				continue;
			}
			if(j==c)
			{
				dp[i][j] = min(dp[i-1][j],dp[i-1][j-1])+arr[i][j];

				continue;
			
			}
			dp[i][j] = min(dp[i-1][j],min(dp[i-1][j+1],dp[i-1][j-1]))+arr[i][j];
		}
	}
	


	ll mn = 1e9+5;
	for(ll i=1;i<=c;i++)
	{
		mn = min(mn,dp[r][i]);
	}
	cout<<mn<<endl;
	
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	//ll t;cin>>t;
	//while(t--)
	//{
		solve();
	//}
	

    return 0;
}
