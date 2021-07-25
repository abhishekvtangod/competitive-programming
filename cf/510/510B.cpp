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

char matr[52][52];
bool visited[52][52]={false};
ll m,n;
void dfs(ll i,ll j,ll pi, ll pj, char c)
{
	if(i<0||j<0||i>=n||j>=m||matr[i][j]!=c)return;
	
	if(visited[i][j])
	{
		cout<<"Yes\n";
		exit(0);
	}
	visited[i][j]=true;
	if(j+1 != pj)dfs(i,j+1,i,j,c);
	if(j-1 != pj)dfs(i,j-1,i,j,c);
	
	if(i+1 != pi)dfs(i+1,j,i,j,c);
	if(i-1 != pi)dfs(i-1,j,i,j,c);
}


void solve()
{
	cin>>n>>m;
	
	for(ll i=0;i<n;i++)
		for(ll j=0;j<m;j++)
			cin>>matr[i][j];
			
	for(ll i=0;i<n;i++)
		for(ll j=0;j<m;j++)
			if(!visited[i][j])
				dfs(i,j,-1,-1,matr[i][j]);
				
	cout<<"No\n";
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
