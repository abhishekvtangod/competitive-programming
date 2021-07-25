#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

const int mxN = 1e5+6;
vector<int> adj[mxN];
vector<int> c;


int dfs(int src, int par, int color){
	int temp = 1;
	for(auto u: adj[src]){
		if(u != par){
			if(c[u] != color){
				temp = 0;
			}
			temp = min({dfs(u, src, color), temp});
		}
	}
	return temp;
}

int opt(int src){
	int temp = 1;
	for(auto u: adj[src]){
		temp = min({temp, dfs(u, src, c[u])});
	}
	return temp;
}

void solve(){
	int n;
	cin >> n;
	for(int i = 0; i < n-1; i++){
		int u, v;
		cin >> u >> v;
		u--; v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i= 0; i < n; i++){
		int temp;
		cin >> temp;
		c.push_back(temp);
	}
	string aa = "YES", bb = "NO";
	int node1 = -1, node2 = -1;
	for(int i = 0; i < n; i++){
		for(auto u: adj[i]){
			if(c[i] != c[u]){
				node1 = i;
				node2 = u;
			}
		}
	}
	if(node1 == -1){
		cout << aa << endl;
		cout << 1 << endl;
		return;
	}
	int n1 = opt(node1);
	int n2 = opt(node2);
	node1++;
	node2++;
	if(n1){
		cout << aa << endl << node1 << endl;
	} else if(n2){
		cout << aa << endl << node2 << endl;
	} else{
		cout << bb << endl;
	}

}

int main()
{   
	IOS;

	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}

    return 0;
}