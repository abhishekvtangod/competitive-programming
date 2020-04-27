/**
 *    author:  abhishekvtangod
 *    created: 24.04.2020 19:23:19 IST       
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
	vector<ll> a,b;
	ll x;


	ll dp[n+4][2];
	memset(dp,0,sizeof(dp));
    
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		b.push_back(x);
	}
	for (int i = 0; i < n; i++)  
    { 
        if(i==0) 
        { 
            dp[i][0] = a[i]; 
            dp[i][1] = b[i]; 
            continue; 
        } 
          
       dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + a[i]); 
       dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + b[i]); 
    } 
      
    cout<<max(dp[n-1][0], dp[n-1][1]); 
	
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
