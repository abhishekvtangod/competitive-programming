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
vector<ll> v;
ll LCS(string a,string b,ll m,ll n)
{
	ll dp[m+1][n+1];
	
	for(ll i=0 ; i<=m;i++)
	{
		for(ll j=0; j<=n; j++)
		{
			if(i ==0 || j== 0)
				dp[i][j] = 0;
			else if(a[i-1] == b[j-1])
				dp[i][j] = v[a[i-1]-'a']+ dp[i-1][j-1];
			else
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			
			//cout<<dp[i][j]<<" ";
		}
		//cout<<endl;
	}

	return dp[m][n];
}


void solve()
{
	ll m,x,n;cin>>n>>m;
	v.clear();
	for(ll i=0; i< 26;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	string a,b;cin>>a>>b;
	cout<<LCS(a,b,n,m)<<'\n';
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
