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
		string a,b;cin>>a>>b;
		ll m = a.size(),n = b.size();

		ll dp[m+2][n+2]={0};	
		for(ll i =0; i<=m;i++)
		{
			for(ll j =0; j<= n;j++)
			{
				
				if(i == 0 || j == 0) 
				{
					dp[i][j] = 0;
				}
				else if(a[i-1] == b[j-1])
				{
					dp[i][j]= dp[i-1][j-1]+1;
				}
				else
				{
					dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
				}
			}
		}
		cout<<dp[m][n]<<endl;
		
		
		
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
