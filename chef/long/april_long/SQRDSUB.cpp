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
	
	for(ll i=0; i <n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	
	ll left=0,right=0;

	ll cnt=0;
	ll flag=0;
	v.push_back(2);
	ll prev;
	for(ll i=0;i<v.size();i++)
	{
		if((v[i]%2==0))
		{
			
			if(flag  && (prev%4!=0))
			{
				cnt+=left+right+(left*right)+1;
			}
			
			flag=1;
			
			left=right;
			right=0;
			
			prev=v[i];
			
		}
		if(v[i]%2!=0)
		{
			right++;
		}
		
	}
	//cout<<cnt<<endl;
	cout<<(n*(n+1)/2) - (cnt)<<endl;
	
	
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
