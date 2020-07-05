/**
 *    author:  abhishekvtangod
 *    created:        
**/
 
#include<bits/stdc++.h>
using namespace std; 
 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define debug(x) cerr<<#x<<": "<<x<<" "<< endl;
 
typedef long long int ll;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<pair<ll,ll>> indexed_set;
 	
// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };
const int mxN = 2*(1e5+6);
vector<int> adj[mxN];
int visited[mxN];

vector<int> ans;

int dfs(int s){
	int cnt = 1;
	visited[s] = 1;	
	ans.push_back(s);
	for(auto u: adj[s]){
		if(!visited[u]){
			cnt+= dfs(u);			
		}
	}

	return cnt;
}

 
void solve(){
	int n,m;
	cin>>n>>m;
	vector<ll> a(n+1);
	vector<ll> b(n+1);

	for(int i = 1;i<=n;i++){
		cin>>a[i];
		visited[i] = 1;
		adj[i].clear();
	}
	for(int i = 1;i<=n;i++){
		cin>>b[i];
	}
	for(int i =0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<pair<double,int>> w(n+1);
	for(int i =1;i<=n;i++){
		w[i] = {(a[i]/((double)b[i])),i};
	}
	w[0] = {-1,-1};
	
	sort(w.begin(),w.end());
	double mx = (*w.rbegin()).first;
	for(int i = n;i>=1;i--){
		if(w[i].first == mx){
			visited[w[i].second] = 0;
		}

	}

	int ansCnt = 1;
	vector<int> final;
	for(int i = n;i>=1;i--){
		if(w[i].first == mx){
			if(!visited[w[i].second]){
				// ansCnt = max({ansCnt, dfs(w[i].second)});
				// cout<<dfs(w[i].second)<< endl;
				ans.clear();
				int temp = dfs(w[i].second);
				if(ansCnt <= temp){
					final.clear();
					ansCnt = temp;
					for(auto u:ans){
						final.push_back(u);
					}
					// cout<<endl;
				}


			}

		}

	}
	cout<<ansCnt<< endl;
	sort(final.begin(),final.end());
	for(auto u:final){
		cout<<u<<" ";
	}
	cout<<endl;
}
 
void solve1()
{
    ll t,w,n,m;cin>>n>>m;
    ll visit[n+1]={0};
    vector<pair<double,ll>> adj[n+1];
    vector<ll> pop;
    vector<double> cap_t,cap;cap.push_back(0);
    cap_t.push_back(0);pop.push_back(0);
    double mx=-1,fl;    
    for(int i=0;i<n;i++){cin>>fl;cap_t.push_back(fl);}
    for(int i=1;i<=n;i++){cin>>t;cap.push_back(cap_t[i]/t);
    pop.push_back(t);
    mx=max(mx,cap[i]);
    }
    for(int i=0;i<m;i++)
    {
        ll t1,t2;
        cin>>t1>>t2;
        adj[t1].push_back({cap[t2],t2});
        adj[t2].push_back({cap[t1],t1});
    }
    vector<ll> ans;
    for(ll i=1;i<=n;i++)
    {
        // cout<<cap[i]<<" ";
        vector<ll> temp;
        if(visit[i])continue;
        if(cap[i]==mx)
        {
            queue<ll> q;
            // cout<<i<<" ";
            q.push(i);
            while(!q.empty())
            {
                ll tp=q.front();q.pop();
                if(visit[tp])continue;
                temp.push_back(tp);
                visit[tp]=1;
                for(auto r:adj[tp])
                {
                    if(visit[r.second])continue;
                    if(r.first==mx)
                    {
                        q.push(r.second);
                    }
                }
            }
            if(temp.size()>ans.size())
            {
                ans.clear();
                for(auto o:temp)ans.push_back(o);
            }
        }
    }
    
    cout<<ans.size()<<"\n";
    for(auto i:ans)
        cout<<i<<" ";
    cout<<"\n";
}

int main()
{   
	IOS;
 
 	#ifndef ONLINE_JUDGE
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif 
 
	ll t;cin>>t;
	while(t--){
		solve();
	}
	
 
    return 0;
}