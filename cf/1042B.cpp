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
	vector<pair<ll,string>> two,three;
	vector<pair<ll,char>> one;
	ll abc=500002;
	for(ll i=0; i<n;i++)
	{
		ll a;string b;cin>>a>>b;
		sort(b.begin(),b.end());
		if(b.size() == 3)
				abc=min(abc,a);
		else if(b.size() == 2)
			two.push_back({a,b});
		else
			one.push_back({a,b[0]});
	}
	

	ll a=500002,b=500002,c=500002,ab=500002,bc=500002,ac=500002;
	for(ll i=0;i<(ll)one.size();i++)
	{
		if(one[i].second=='A')
		{
			a = min(a,one[i].first);
		}
		else if(one[i].second == 'B')
		{
			b = min(b,one[i].first);			
		}
		else
		{
			c = min(c,one[i].first);
		}
	}
		ll ans=a+b+c;

	for(ll i=0;i<(ll)two.size();i++)
	{
		if(two[i].second == "AB")
		{
			ab=min(ab,two[i].first);
		}
		else if(two[i].second == "BC")
		{
			bc=min(bc,two[i].first);			
		}
		else if(two[i].second == "AC")
		{
			ac=min(ac,two[i].first);
		}
	}
	ll twos;
	twos= min(ab+c,bc+a);
	twos = min(twos,ac+b);
	twos = min(twos,ans);
	twos=min(twos,abc);
	twos=min(twos,ab+bc);
	twos=min(twos,ab+ac);
	twos=min(twos,ac+bc);
	if(twos == 500002)
	{
		cout<<"-1";return;
	}
	cout<<twos;
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
