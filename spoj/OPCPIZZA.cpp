/**
 *    author:  abhishekvtangod
 *    created: 20.04.2020 08:11:28 IST 
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
	//ll m,n;cin>>n>>m;
	
	//ll x;vector<ll> v;
	
	//for(ll i=0;i<n;i++)
	//{
		//cin>>x;v.push_back(x);
		
	//}
	//ll cnt=0;
	//sort(v.begin(),v.end());
	//for(ll i=0; i<n;i++)
	//{
		//ll temp = m - v[i];
		//if(v[i]!=temp && binary_search(v.begin()+i,v.end(),temp))cnt++;
	//}
	//cout<<cnt<<'\n';
	
//}

//void solve()
//{
	//ll m,n;cin>>n>>m;
	
	//ll x;vector<ll> v;
	//unordered_map<ll,ll> mp;
	//mp.clear();
	//for(ll i=0;i<n;i++)
	//{
		//cin>>x;v.push_back(x);
		//mp[x]++;
		
	//}
	//ll cnt=0;
	
	
	//for(ll i=0; i<n;i++)
	//{
		//ll temp = m-v[i];
		
		//if(mp[v[i]] && mp[temp])
		//{
			//if(temp == v[i] && (mp[temp] == 1))
			//{
				//continue;	
			//}
		
			//cnt+=1;
			//mp[temp]--;
			//mp[v[i]]--;
		//}
	//}
	
	
	//cout<<cnt<<'\n';
	
//}


void solve()
{
	ll m,n;cin>>n>>m;
	
	ll x;vector<ll> v;
	
	for(ll i=0;i<n;i++)
	{
		cin>>x;v.push_back(x);
		
	}
	ll cnt=0;
	sort(v.begin(),v.end());
	for(ll i=0; i<n;i++)
	{
		ll temp = m - v[i];
		ll frq = upper_bound(v.begin()+i,v.end(),temp)-lower_bound(v.begin()+i,v.end(),temp);
		//[a,b)->upper and lower bound
		if(v[i]!=temp && frq>0)cnt++;
	}
	cout<<cnt<<'\n';
	
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
