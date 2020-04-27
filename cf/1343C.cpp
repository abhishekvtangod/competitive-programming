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
	ll in;cin>>in;
	ll x;
	vector<ll> v;
	for(ll i=0;i<in;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	v.push_back(0);
	ll p=0,n=0,sm=0;
	ll mx=0;
	for(ll i=0;i<=in;i++)
	{
		if(v[i]>0 && p==1)
		{
			mx = max(mx,v[i]);
			n=0;
		}
		else if(v[i] <0 && n==1)
		{
			mx = max(mx,v[i]);
			p=0;			
		}
		else
		{
			if(i!=0)
				sm+=mx;
			
			if(v[i]>0)
			{
				p=1;
				n=0;
				mx = v[i];
			}
			else if(v[i]<0)
			{
				p=0;
				n=1;
				mx = v[i];
			}
			
			
		}
		
	}
	cout<<sm<<endl;
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
