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
	string s;cin>>s;
	string ans;
	ll n =s.size();
	for(ll i=0; i<s[0]-'0';i++)
		ans+='(';
	ans+=s[0];
	ll diff=0;
	ll i=1;
	for(; i<n;i++)
	{
			diff=s[i-1]-s[i];
			if(diff>0)
			{
				for(ll j=0;j<diff;j++)
					ans+=')';
			}
			else
			{
				for(ll j=0; j <abs(diff);j++)
				{
					ans+='(';
				}
			}
			ans+=s[i];
	}
	i--;
	for(ll j=0; j<s[i]-'0';j++)
	{
		ans+=')';
	}
	cout<<ans<<'\n';
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
