// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;




void solve()
{
	ll n;cin>>n;
	map<ll,ll> mp;
	set<ll> s;
	mp[-1] = -1;
	ll inp;
  	for(ll i=0;i < n; i++)
	{
		cin>>inp;
		if(i)
		{
			auto it = s.lower_bound(inp);
			ll l = (it==s.end())?-1:*it;
			ll r = (it==s.begin())?-1:*--it;
			
			cout<<((mp[l]>mp[r])?l:r)<<" ";
		}
		s.insert(inp);
		mp[inp]=i;
	
		
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
