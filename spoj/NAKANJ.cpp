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

ll x[10] = {0,-2,-2,-1,-1,1,1,2,2};
ll y[10] = {0,1,-1,2,-2,2,-2,1,-1};

ll bfs(ll a1,ll b1, ll a2, ll b2)
{
	queue<pair<ll,ll>> q;
	q.push({a1,b1});
	ll moves[9][9],visited[9][9];
	memset(moves,0,sizeof(moves));
	memset(visited,0,sizeof(visited));
	visited[a1][b1]=1;
	while(!q.empty())
	{
		ll m = q.front().first;
		ll n = q.front().second;
		q.pop();
		
		if(m == a2 && n == b2)
			return moves[m][n];
		
		for(ll i=1; i<=8;i++)
		{
			if(m+x[i]>8||m+x[i]<1||n+y[i]>8||n+y[i]<1)
				continue;
			else
			{
				visited[m+x[i]][n+y[i]] = 1;
				moves[m+x[i]][n+y[i]]=moves[m][n]+1;
				q.push({(m+x[i]),(n+y[i])});
			}
		}
		
		
	}

	return 0;
}



void solve()
{
		ll a1,a2,b1,b2;
		char xx,yy;
		cin>>xx>>b1>>yy>>b2;
		a1 = (ll)(xx-'a'+1);
		a2 = (ll)(yy-'a'+1);
		cout<<bfs(a1,b1,a2,b2)<<endl;
		

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
