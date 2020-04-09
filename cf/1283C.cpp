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
	vector<ll> v;
	
	ll x;
	set<ll> s;
	for(ll i=1; i<=n;i++) s.insert(i);
	v.push_back(-1);
	for(ll i=1;i <=n;i++)
	{
		cin>>x;
		v.push_back(x);
		if(x)
			s.erase(x);

	}
	vector<ll> temp(s.begin(),s.end());
	
	
	ll pos=0;
	for(ll i=1; i<=n;i++)
	{
		if(v[i] == 0)
		{
			if(temp[pos] == i)
			{
				if(pos == 0)swap(temp[pos],temp[pos+1]);
				else swap(temp[pos],temp[pos-1]);
			}
			pos++;
		}

	}
	
	pos=0;
	for(ll i=1; i<=n;i++)
	{
			if(v[i] == 0)
			{
				cout<<temp[pos++]<<" ";
			}
			else
				cout<<v[i]<<" ";
	}
		
	
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
