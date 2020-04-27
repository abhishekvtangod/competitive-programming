/**
 *    author:  abhishekvtangod
 *    created: 26.04.2020 08:35:30 IST       
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


ll a[1000000+6][5];
ll ans=0;
void solve()
{
	memset(a,0,sizeof(a));


	ll n;cin>>n;
	if(n==0)
		exit(0);
	for(ll i=0;i<n;i++)
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	


	if(n == 1)
		a[0][2] += a[0][1];
	else {
		a[0][2] += a[0][1];
		a[1][0] += a[0][1];
		a[1][1] += min(min(a[0][1], a[0][2]), a[1][0]);
		a[1][2] += min(a[0][1], min(a[0][2], a[1][1]));

		for(int i=2; i<n; i++) {
			a[i][0] += min(a[i-1][0], a[i-1][1]);
			a[i][1] += min(min(a[i-1][1], a[i][0]), min(a[i-1][2], a[i-1][0]));
			a[i][2] += min(min(a[i][1], a[i-1][1]), a[i-1][2]);
		}
	}
	
	ans = a[n-1][1];
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	//ll t;cin>>t;
	ll i=1;
	while(1)
	{
		
		solve();
		cout<<i<<". "<<ans<<'\n';
		i++;
	}
	

    return 0;
}
