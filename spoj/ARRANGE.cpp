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
	ll n,x;cin>>n;
	vector<ll> v;
	ll cnt2=0,cnt3=0,cnt1=0;
	for(ll i=0; i<n;i++)
	{
		cin>>x;
		v.push_back(x);
		if(v[i]==1)
			cnt1++;

	}
	sort(v.begin(),v.end());	
	ll j = cnt1;
	while(cnt1--)cout<<"1 ";
	
	
	if(j == n-2 && v[j] == 2 && v[j+1]==3)
		cout<<"2 3";
	else
	{
		for(ll i = n-1;i>=j;i--)
			cout<<v[i]<<" ";
	}
	
	cout<<'\n';
	
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
