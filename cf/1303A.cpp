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
	string s;cin>>s;
	ll f=-1,e=-1;
	for(ll i=0;i<s.size();i++)
	{
		if(s[i]=='1')
		{
			f=i;break;
		}
	}
	for(ll i=s.size()-1;i>=0;i--)
	{
		if(s[i]=='1')
		{
			e=i;break;
		}
	}
	
	if(f==e)
	{
		cout<<"0\n";
		return;
	}
	ll cnt=0;
	for(ll i=f;i<=e;i++)
	{
		if(s[i]=='0')cnt++;
	}
	cout<<cnt<<'\n';
	
	
	
	
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
