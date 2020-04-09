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
	ll n;
	vector<ll> v;

	cin>>n;
	for(ll i= 0; i< n; i++)
	{
		ll x;
		cin>>x;
		v.push_back(x);
	}
	set<ll> temp(v.begin(),v.end());
	if(temp.size() == 1)
	{
		cout<<"1\n";
		for(ll i=0;i <n;i++)
			cout<<"1 ";
		cout<<'\n';
		return;
	}
	if(!(v.size()%2))
	{
		
		cout<<"2\n";
		for(ll i =0; i <n;i++)
		{
			
			cout<<((i%2)?1:2)<<" ";
			
		}
		cout<<'\n';
		return;
		
	}
	// n is odd
	
	
	

	ll three=0;

	for(ll i=0; i<n;i++)
	{
		if(v[i] == v[(i+1)%n])
		{
			three=1;break;
			
		}

	}
	
	if(three)
	{
		
		cout<<"2\n";
		for(ll i=0; i <n-1;i++)
		{
			if(v[i] == v[i+1] && three)
			{
				three=0;
				cout<<1+i%2<<" ";
				
			}
			
			
			cout<<1+i%2<<" ";
		}
		if(three)
		{
			cout<<"1";
		}
		cout<<'\n';
	}
	else
	{
			cout<<"3\n";
			for(ll i=0; i<n-1;i++)
			{
				cout<<1+(i%2)<<" ";
			}
			cout<<"3\n";
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
