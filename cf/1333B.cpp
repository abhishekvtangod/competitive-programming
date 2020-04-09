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
    ll t,cn;cin>>cn;
    vector<ll> v,req;
    for(ll i=0;i<cn;i++)
    {
        cin>>t;v.push_back(t);
    }
    for(ll i=0;i<cn;i++)
    {
        cin>>t;req.push_back(t);
    }
    ll p=0,n=0,f=0;
    for(ll i=0;i<cn;i++)
    {
        if(v[i]!=req[i])
        {
            if((v[i]>req[i] && n!=1) || (v[i]<req[i] && p!=1)){f=1;break;}
        }
        if(v[i]>0)p=1;
        else if(v[i]<0)n=1;
    }
    if(!f)cout<<"YES\n";
    else cout<<"NO\n";
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
