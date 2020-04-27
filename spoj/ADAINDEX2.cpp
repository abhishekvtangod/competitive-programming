/**
 *    author:  abhishekvtangod
 *    created: 17.04.2020 13:57:06 IST       
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

const ll mxN=1e6+5;
ll tr[mxN][28]={0};
ll cnt[mxN]={0};


ll root = 0,sz=1;

void insert(string s)
{
	ll node = root;
	cnt[node]++;
	for(ll i=0;i < s.size();i++)
	{
		int q = s[i] - 'a';
		if(!tr[node][q])
			tr[node][q] = sz++;
		
		node = tr[node][q];
		cnt[node]++;
	}
}

ll query(string s)
{
	ll node = root;
	
	
	for(ll i=0;i<s.size();i++)
	{
		int q = s[i]-'a';
		if(!tr[node][q])
			return 0;
		node = tr[node][q];
		
		if(i == s.size()-1)
			return cnt[node];
		
	}
	return 0;
}

void solve()
{
	ll n,q;cin>>n>>q;
	for(ll i=0; i<n; i++)
	{
		string s;
		cin>>s;
		insert(s);
	}
	for(ll i=0; i<q;i++)
	{
		string s;
		cin>>s;
		cout<<query(s)<<'\n';
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
