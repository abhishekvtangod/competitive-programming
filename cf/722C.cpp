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


struct disjset
{
	ll data;
	ll parent;
} ;

vector<disjset> a;
vector<ll> p,m;

ll find_parent(ll x)
{
	if(x != a[x].parent)a[x].parent=find_parent(a[x].parent);
	return a[x].parent;
}

void merge_set(ll x,ll y)
{
	ll p1 = find_parent(x);
	ll p2 = find_parent(y);
	a[p1].parent=p2;
	a[p2].data+=a[p1].data;

}


void solve()
{
		ll n;cin>>n;
		a.resize(n+2);
		p.resize(n+2,0);
		m.resize(n+2,0);
		
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i].data;
			a[i].parent = 0;
		}
		a[0].parent=0;
		a[n+1].parent=0;
		for(ll i=1;i<=n;i++)
		{
			cin>>p[i];
		}

		
		for(ll i=n; i >=1; i--)
		{
			a[p[i]].parent = p[i];
			
			if(a[p[i]-1].parent !=0)
			{
				merge_set(p[i],p[i]-1);
			}
			
			if(a[p[i]+1].parent !=0)
			{
				merge_set(p[i]+1,p[i]);
			}
			
			
			//m[i]=max(m[i+1],a[a[p[i]].parent].data);
			//or
			ll par=find_parent(p[i]);
			m[i]=max(m[i+1],a[par].data);


			 
		}
		
		for(ll i=2; i<=n;i++)
		{
			cout<<m[i]<<'\n';
		}
		cout<<"0\n";
		
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
