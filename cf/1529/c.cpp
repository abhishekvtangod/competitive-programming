#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

const int mxN = 1e5 + 6;
ll n;
vector<int> adj[mxN];
vector<pair<int, int>> v;
int dp[mxN][2];

void dfs(int src, int par){

	dp[src][0]  = max({dp[par][] + abs(v[src][] - v[par][]), dp[par][] + abs(v[src][] - v[par][])}); 
	dp[src][1]  = max({dp[par][] + abs(v[src][] - v[par][]), dp[par][] + abs(v[src][] - v[par][])});
	for(auto u: adj[src]){
		if(u != par){
			dfs(u, src);
		}
	}
}

void solve(){
	memset(dp, 0, sizeof(dp));
	cin >> n;
	for(int i = 0;i < n; i++){
		ll l, r;
		cin >> l >> r;
		v.push_back({l, r});
	}
	for(int i = 0;i < n-1; i++){
		ll u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1, -1);	



}

int main()
{   
	IOS;

	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}

    return 0;
}