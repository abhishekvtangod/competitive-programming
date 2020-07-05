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
		if(n==1){cout<<"1\n1 1\n";return;}
		
		cout<<floor(n/2)<<endl;
		
		ll i=1;
		
		if(n%2)
		{
			cout<<"3 ";
			cout<<i++<<" ";
			cout<<i++<<" ";
			cout<<n<<"\n";
		}
		else
		{
			cout<<"2 ";			
			cout<<i++<<" ";
			cout<<i++<<"\n";
		}
		
		for(ll j=2;j<=floor(n/2);j++)
		{
			cout<<"2 ";
			cout<<i++<<" ";
			cout<<i++<<"\n";		
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
