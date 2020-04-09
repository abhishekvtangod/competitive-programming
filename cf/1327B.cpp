// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
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
	vector<ll> v[n];
	bool free[n+1];
	memset(free,true,n+1);
	
	vector<bool> free_girl(n+1,true),c(n+1,true);
	
	for(ll i=0; i<n;i++)
	{
		ll x;cin>>x;
		v[i].resize(x,0);
		for(ll j=0;j<x;j++)
		{
			cin>>v[i][j];
		}
	}
	ll cnt=0;
	ll ans=0,ii=0,jj=1;
	for(ll i=0;i<n;i++)
	{
			bool flag=true;
			for(ll j=0; j<(ll)v[i].size();j++)
			{
				if(c[v[i][j]] == true)	//if free
				{
					c[v[i][j]]=false;
					flag=false;
					ans++;

					break;
				}
			}
			//free_girl[i]=flag;
			if(flag)cnt=i;
	}
	if(ans == n)
	{
		cout<<"OPTIMAL\n";
	}
	else
	{
		cout<<"IMPROVE\n";
		//while(free_girl[ii] == false)
			//ii++;
		
		while(c[jj] == false)
			jj++;
		ii = cnt;
		cout<<ii+1<<" "<<jj<<'\n';
		
	}
	
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
