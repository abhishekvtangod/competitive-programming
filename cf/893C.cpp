// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

struct HASH{
  size_t operator()(const pair<int,int>&x)const{
    return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
  }
};



unordered_map<ll,ll> link;
vector<ll> v;

ll find(ll x)
{
	if(x != link[x])link[x] = find(link[x]);
	return link[x];
}


void unite(ll a, ll b)
{
	//if(!same(a,b))
	//{
		a = find(a);
		b = find(b);
		if(v[a] > v[b])swap(a,b);
		
		link[b] = a;
		
	//}
}

void solve()
{
	ll n,m,y;cin>>n>>m;
	ll x;
	for(ll i=1;i<=n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	
	for(ll i=0;i<n;i++) link[i]=i;
	
	
	for(ll i=0; i < m; i++)
	{
		cin>>x>>y;
		unite(x-1,y-1);
	}
	//for(auto u=link.begin();u != link.end();u++)
		//cout<<"["<<u->first.first<<"-"<<u->first.second<<":"<<u->second.first<<"-"<<u->second.second<<"]";
	//cout<<endl;
	
	
	set<pair<ll,ll>> s;
	for(ll i=0;i<n;i++)
	{
		ll idx = find(i);
		s.insert({v[idx],idx});
	}
	ll ans=0;
	for(auto u:s)
	{
		ans+=u.first;
		//cout<<"["<<u.first<<"-"<<u.second<<"]";
	}
	cout<<ans;
	
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
