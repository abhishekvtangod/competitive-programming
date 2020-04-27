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
	ll x,a,b;cin>>a>>b>>x;
	string s = "";
		
	if(a>b)s="01";
	else s = "10";
	
	if(!(x%2))
	{

		string ans;
		ll tmp = x/2;
		while(tmp--)
			ans+=s;
		
		a-=(x/2);
		b-=(x/2);
		
		string as="",bs="";
		tmp=a;
		while(tmp--)
			as+="0";
		tmp=b;
		while(tmp--)
			bs+="1";
		if(a>b)
		cout<<ans<<bs<<as<<endl;
		else
		cout<<ans<<as<<bs<<endl;
	}
	else
	{
		
		string ans;
		ll tmp = x/2;
		while(tmp--)
			ans+=s;
		
		a-=(x/2);
		b-=(x/2);
		
		string as="",bs="";
		tmp=a;
		while(tmp--)
			as+="0";
		tmp=b;
		while(tmp--)
			bs+="1";
		if(a>b)
		cout<<ans<<as<<bs<<endl;
		else
		cout<<ans<<bs<<as<<endl;
		
	}
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
