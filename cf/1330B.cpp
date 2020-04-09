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



ll foo(vector<ll> v)
{
	set<ll> a,b;
	ll i=0;
	ll n=v.size();
	for(;i<n;i++)
	{
		if(a.count(v[i]) == 0)
		{
			a.insert(v[i]);
		}
		else
			break;
	}
	
	for(;i<n;i++)
	{
		b.insert(v[i]);
	}
	
	vector<ll> aa(a.begin(),a.end());
	vector<ll> bb(b.begin(),b.end());
	
	
	for(i=0;i<aa.size();i++)
	{
		if(aa[i] != i+1)
			return 0;
	}
//-------	
	//for(auto aaa:aa)
		//cout<<aaa<<" ";
	
	//cout<<endl;
	//for(auto aaa:bb)
		//cout<<aaa<<" ";
		
	//cout<<endl;
//-------

	for(i=1;i<bb.size();i++)
	{
		if(bb[i] != i+1)
			return 0;
	}
	
	return 1;
}



void solve()
{
	ll n;cin>>n;
	vector<ll> v;

	ll x;
	for(ll i=0; i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	ll cnt=0;
	cnt+=foo(v);
	reverse(v.begin(),v.end());
	cnt+=foo(v);
	
	cout<<cnt<<endl;

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
