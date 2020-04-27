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

const ll mxN = 10005;
ll tri[mxN*11*11][11];	
ll cnt[mxN*11*11][11];

ll root = 0,sz=1;

void init()
{
	memset(tri,-1,sizeof(tri));
	memset(cnt,-1,sizeof(cnt));

}

bool insert(string s)
{
	ll node = root;
	for(ll i=0; i<s.size();i++)
	{
		ll ch = s[i]-'0';
		if(tri[node][ch] == -1)
			tri[node][ch] = sz++;
		
		node = tri[node][ch];
		
		if(cnt[node][ch] == 1)
			return false;
		
		if(i == s.size()-1)
		{
			if(cnt[node][ch] == 2)
				return false;
		}
		cnt[node][ch] = 2;
		if(i == (s.size()-1))
		{
			cnt[node][ch]=1;
			
		}

	}
	return true;
}


void solve()
{
	ll n;cin>>n;
	ll flag=0;
	
	for(ll i=0; i<n;i++)
	{
		string s;cin>>s;
		if(!insert(s))
		{
			flag=1;
		}
	
	}
	cout<<(flag?"NO":"YES")<<"\n";
	
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t;cin>>t;
	while(t--)
	{
		init();
		solve();
		cout<<"sz: "<<sz<<endl;
		
	}
	

    return 0;
}
