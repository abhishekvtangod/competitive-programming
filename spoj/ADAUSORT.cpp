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




//void solve()
//{
	//ll n,x;
	//vector<ll> v,a;
	//cin>>n;
	//for(ll i=0;i<n;i++)
	//{
		//cin>>x;
		//v.push_back(x);
		//a.push_back(x);
	//}
	//reverse(a.begin(),a.end());
	//sort(v.begin(),v.end());
	//for(ll i=0; i< n;i++)
	//{
		//ll idx = n-(find(a.begin(),a.end(),v[i])-a.begin());
		
		//cout<<idx<<" ";
		//a[n-idx] = -1;	
	
	//}
	
	
//}

void solve()
{
	ll n,x;cin>>n;
	vector<pair<ll,ll>> v;
	for(ll i =1; i <=n;i++)
	{
		cin>>x;
		v.push_back({x,i});
	}
	sort(v.begin(),v.end(),[](pair<ll,ll>& p1,pair<ll,ll>& p2)->bool{
		if(p1.first == p2.first)
			return p1.second>p2.second;
		return p1.first < p2.first;
	});
	for(auto u: v)
		cout<<u.second<<" ";

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
