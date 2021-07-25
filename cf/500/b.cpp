#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

const int mxN = 306;
char arr[mxN][mxN];

// union by size

// sort edge list
struct dsu{
	int n;
	vector<int> siz, link;
	// vector<vector<int>> adj;

	void init(int nodes){
		n = nodes;
		siz.resize(n);
		link.resize(n);
		// adj.resize(n);
		for(int i = 0; i < n; i++){
			link[i] = i;
			siz[i] = 1;
		}
	}

	int find_set(int x){
		if(link[x] == x){
			return x;
		}
		return link[x] = find_set(link[x]);
	}

	int unite_sets(int a, int b){
		a = find_set(a);
		b = find_set(b);
		if(a == b){
			return 0;
		}
		// adj[a].push_back(b);
		// adj[b].push_back(a);
		if(siz[a] < siz[b]){
			swap(a, b);
		}
		siz[a] += siz[b];
		link[b] = a;
		return 1;
	}

};
dsu d;
vector<int> pos[mxN];
int c[mxN];
void solve(){
	memset(arr, 0, sizeof(arr));
	memset(c, 0, sizeof(c));
	int n;
	cin >> n;
	d.init(n);
	vector<int> v;
	for(int i = 0;i < n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp-1);
	}
	for(int i = 0; i<n; i++){
		for(int j= 0; j < n; j++){
			cin >> arr[i][j];
			if(arr[i][j] == '1'){
				d.unite_sets(i, j);
			}
		}
	}
	for(int i= 0; i < n; i++){
		int temp = d.find_set(i);
		pos[temp].push_back(v[i]);
	}
	for(int i= 0; i < n; i++){
		sort(pos[i].begin(), pos[i].end());
	}

	for(int i = 0; i < n; i++){
		int temp = d.find_set(i);
		cout << pos[temp][c[temp]++]+1 << " ";
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