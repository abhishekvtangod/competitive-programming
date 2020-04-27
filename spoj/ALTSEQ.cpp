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
	ll n;cin>>n;
	vector<ll> v;
	ll length[n+1]={0};
	ll x;
	for(ll i=0; i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	ll ans = 1;
	for(ll i =0; i<n;i++)
	{
		length[i]=1;
		for(ll j=0; j <i;j++)
		{
			if((abs(v[j]) < abs(v[i])) && (v[i]*v[j] <0))
			{
				length[i] = max(length[i],length[j]+1);
				ans = max(ans,length[i]);

			}
				//cout<<v[i]<<" "<<v[j]<<endl;
		}
	}
	//for(ll i=0; i < n;i++)	
		//cout<<length[i]<<" ";
	cout<<ans<<endl;
	
	
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
