// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

vector<

void addEdge(vector<ll> adj[],ll u,ll v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	
	
	ll t;cin>>t;
	
	while(t--)
	{
		ll n;cin>>n;
		ll u,v;
		for(ll i=0; i < n-1;i++)
		{
			cin>>u>>v;
			addEdge(adj,u,v);
			
		}
		



		//bfs(adj,visited,1);
		
		
		//for(ll i=0; i < n;i++)
			//cout<<visited[i]<<" ";

		//for(ll i=0; i < n-1;i++)
		//{
			//cout<<i<<"->";
			//for(auto tmp:adj[i])
				//cout<<tmp<<" ";
			//cout<<endl;
		//}

	}
	
	

    return 0;
}
