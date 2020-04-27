/**
 *    author:  abhishekvtangod
 *    created: 24.04.2020 17:58:24 IST       
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

char matr[1005][1005];
bool visited[1005][1005]={false};
ll m,n;
ll mx=0;
ll cnt=0;
void dfs(ll i,ll j)
{
	if(i<0||j<0||i>=n||j>=m)return;
	
	if(visited[i][j])
	{
		return;
	}
	visited[i][j]=true;
	cnt++;
	dfs(i-1,j);
	dfs(i+1,j);
	dfs(i,j-1);
	dfs(i,j+1);

}
 
 
void solve()
{
	cin>>n>>m;
	
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			cin>>matr[i][j];
			if(matr[i][j]!='G')
				visited[i][j]= true;
		}
	}
			
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			if(!visited[i][j])
			{
				cnt=0;
				dfs(i,j);
			    mx = max(cnt,mx);
			    //cout<<cnt<<endl;
			}
		}
	}
				
	cout<<mx;
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

//5 5
//G G S G G
//S S G S G
//G S G S G
//G G G G G
//S S S S S


