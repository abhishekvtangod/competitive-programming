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

ll sum,row=0,col=0;
vector<ll> rr[105],cc[105];

void solve()
{
	ll n;
	cin>>n;
	sum=0;
	ll arr[105][105];
	for(ll i=0; i<n;i++)
	{
		rr[i].clear();
		cc[i].clear();
	}
	for(ll i=0; i<n;i++)
	{
		for(ll j=0; j<n;j++)
		{
			cin>>arr[i][j];
			if(i == j)
				sum+=arr[i][j];
			
			rr[i].push_back(arr[i][j]);
			cc[j].push_back(arr[i][j]);
		}
	}
	row=0;
	col=0;
	for(ll i=0;i<n;i++)
	{	
		unordered_set<ll> r(rr[i].begin(),rr[i].end());
		if(r.size() != rr[i].size())
			row++;
	}
	
	for(ll i=0;i<n;i++)
	{
		unordered_set<ll> c(cc[i].begin(),cc[i].end());
		if(c.size() != cc[i].size())
			col++;
	}
	
	
		
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t;cin>>t;
	ll i=1;
	while(t--)
	{

		solve();
		cout<<"Case #"<<i<<": "<<sum<<" "<<row<<" "<<col<<'\n';
		i++;
	}
	

    return 0;
}
