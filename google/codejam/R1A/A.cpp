/**
 *    author:  abhishekvtangod
 *    created: 11.04.2020 06:20:30 IST
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

bool subs(string s1, string s2)
{
	
}

sort(v.begin(),v.end(), [](string& a,string& b)->bool{

	return a.size()<b.size();
})


void solve()
{
	ll n;cin>>n;
	string s[55];
	for(ll i=0; i<n;i++)
	{
		cin>>s[i];
	}
	for(ll i=0; i<n;i++)
	{
		for(ll j=0; j<n;j++)
		{
			if(subs(s[i].substr(1),s[j]))
			{
				
			}
		}
	}
	
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t;cin>>t;
	ll test=1;
	while(t--)
	{
		cout<<"Case #"<<test<<":";
		solve();
		test++;
		
		
		//cout<<'\n';
	}
	

    return 0;
}
