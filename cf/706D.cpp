/**
 *    author:  abhishekvtangod
 *    created: 17.04.2020 14:35:18 IST       
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

const ll mxN = 2e6+1;

ll tr[mxN*2*2][2]={0};
ll cnt[mxN*2*2]={0};

ll root=0,sz=1;

void insert(ll n)
{
	ll node = root;
	cnt[node]+=1;
	for(ll i = 30; i>=0; i--)
	{
		ll q = (n >> i) & 1;
		if(!tr[node][q])
			tr[node][q] = sz++;
		//cout<<cnt[node]<<"->"<<tr[node][q]<<endl;
				
		node = tr[node][q];
		
		cnt[node]+=1;

	}
}

void del(ll n)
{
	ll node = root;
	cnt[root]-=1;
	for(ll i =30; i>=0 ; i--)
	{
		ll q= (n >> i) & 1;
		//cout<<cnt[node]<<"->"<<tr[node][q]<<endl;
	
		node = tr[node][q];
		
		cnt[node]-=1;
	}
}

inline ll query(ll n)
{
	ll ans = 0;
	ll node = root;
	
	for(ll i= 30; i>=0; i--)
	{
		ll q = (n>> i) & 1;
		if(tr[node][!q] && cnt[ tr[node][!q] ])
		{
			ans+=(1<<i);
			node = tr[node][!q];
		}
		else
			node = tr[node][q];
	}
	
	
	
	return ans;
}


void solve()
{
	ll n,x;cin>>n;
	char y;
	insert(0);
	
	for(ll i=0; i<n;i++)
	{
		cin>>y>>x;
		if(y == '+') insert(x);
		else if(y == '-') del(x);
		else if(y == '?') cout<<query(x)<<'\n';
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
