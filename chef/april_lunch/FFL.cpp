/**
 *    author:  abhishekvtangod
 *    created: 25.04.2020 19:50:17 IST       
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
	ll n,s;cin>>n>>s;
	vector<ll> p,v;
	ll x;
	ll mn1=1e9+5,mn2=1e9+5;
	ll need = 100-s;
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		p.push_back(x);
		
	}
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		if(x==0)
		{
			mn1=min(mn1,p[i]);
		}
		else
		{
			mn2=min(mn2,p[i]);
		}
		
	}
	if(mn1+mn2<=need)
	{
		cout<<"yes\n";
	}
	else
		cout<<"no\n";
	
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
