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




void solve()
{	
	char arr[105][105];
	
	ll n,m;cin>>n>>m;
	
	for(ll i=0; i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			if(!(i%2))
				arr[i][j]=((j%2)?'W':'B');
			else
				arr[i][j]=((!(j%2))?'W':'B');
		}
	}
	//arr[n-1][m-1]=='W'?arr[n-1][m-1]='B':(arr[1][0]='B',arr[1][1]='W');
	//arr[n-1][0]=='W'?arr[n-1][0]='B':;
	
	if(arr[n-1][m-1]=='W')
	{
		arr[n-1][m-1]='B';
	}
	else
	{
		if(arr[0][m-1] == 'W')
			arr[0][m-1]='B';
		else if(arr[n-1][0] == 'W')
			arr[n-1][0] = 'B';
	}
	
	
	
	for(ll i=0; i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t;cin>>t;
	while(t--)
	{
		solve();
	}
	

    return 0;
}
