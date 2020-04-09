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
	vector<tuple<ll,ll,ll>> v;
	ll s,e;
	for(ll i=0;i<n;i++)
	{
		cin>>s>>e;
		v.push_back({s,e,i});
		
	}
	sort(v.begin(),v.end());
	
	char ans[1006];
	ll cur_C=0,cur_J=0;
	for(ll i=0;i<n;i++)
	{
		ll st,ed,idx;
		tie(st,ed,idx)=v[i];
		if(st>=cur_C)
		{
			ans[idx]='C';cur_C=ed;
		}
		else if(st>=cur_J)
		{
			ans[idx]='J';cur_J=ed;
		}
		else
		{
			cout<<"IMPOSSIBLE\n";
			return;
		}
	}
	
	for(ll i=0;i<n;i++)
		cout<<ans[i];

	cout<<'\n';

}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t;cin>>t;
	ll i=1;
	while(t--)
	{
		cout<<"Case #"<<i<<": ";
		solve();
		i++;
	}
	

    return 0;
}
