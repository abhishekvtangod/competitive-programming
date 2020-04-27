/**
 *    author:  abhishekvtangod
 *    created: 25.04.2020 20:24:01 IST       
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
    int x,n,k;cin>>n>>k;
    vector<ll>v;
    vector<ll> sor;
    for(int i=0;i<n;i++)
    {
        cin>>x;v.push_back(x);
        sor.push_back(x);
    }
    stable_sort(sor.begin(),sor.end());

	for(ll i=0;i<n;i++)
	{
		if(v[i]!=sor[i])
			{
				ll min=i;
				for(ll j=i+k;j<n;j+=k)
				{
					// cout<<j<<"+"<<v[j]<<" ";;
					if(v[min]>v[j]){min=j;}
				}
				// cout<<v[min]<<" "<<sor[i].first<<"\n";
				if(v[min]==sor[i]){ll t=v[min];v[min]=v[i];v[i]=t;}
				else  {cout<<"no\n";return ;}
			}
	}
    cout<<"yes\n";
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
