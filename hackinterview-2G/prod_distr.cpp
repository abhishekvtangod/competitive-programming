/**
 *    author:  abhishekvtangod
 *    created: 25.04.2020 12:08:09 IST       
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
	ll m,n;
	cin>>n>>m;
	vector<ll> v;
	ll x;
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	if(n < m)
	{
		cout<<"0\n";return;
	}
	
	sort(v.begin(),v.end());
	ll idx=1;
	
	ll i=0,ans=0,sum=0;
	for(;i<n;i+=m)
	{
		ll last = (floor(n/m)*m)-m;
		if(i+m-1 >= last)
			break;
	
		sum = 0;	
		for(ll j =i;j <i+m;j++)
		{
			//cout<<v[j]<<" ";
			sum+=v[j];
		}
		ans+=sum*idx;
		idx++;
		//cout<<endl;
	}
	sum=0;
	for(;i<n;i++)
	{
		//cout<<v[i]<<" ";
		sum+=v[i];
	}
	ans+=sum*idx;
	//cout<<endl;
	cout<<ans%mod<<endl;

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
