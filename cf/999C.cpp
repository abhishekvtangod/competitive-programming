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
	ll n,k;cin>>n>>k;
	string s,temp;
	cin>>s;
	vector<pair<char,ll>> v;
	for(ll i=0;i < n;i++)
	{
		v.push_back({s[i],i});
	}
	sort(v.begin(),v.end());
	sort(v.begin()+k,v.end(),[](pair<char,ll> &p1,pair<char,ll> &p2)->bool{return p1.second<p2.second;});
	
	for(ll i=k;i<n;i++)
	{
		cout<<v[i].first;
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
