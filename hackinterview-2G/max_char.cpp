/**
 *    author:  abhishekvtangod
 *    created: 25.04.2020 13:06:55 IST       
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

string s;
ll n;
vector<ll> A;
ll tre[10000000+9];

unordered_map< ll, vector<ll>> dp; 



void build(ll node, ll start, ll end)
{
    if(start == end)
    {
        tre[node] = A[start];
    }
    else
    {
        ll mid = start+(end-start)/2;
        build(2*node,start,mid);
        build(2*node+1,mid+1,end);

        tre[node] = max(tre[2*node],tre[2*node+1]);
    }
    

}



ll mx(ll a, ll b, ll k, ll x, ll y) {
	if (b < x || a > y) return 0;
	if (a <= x && y <= b) return tre[k];
	int d = (x+y)/2;
	return max(mx(a,b,2*k,x,d) , mx(a,b,2*k+1,d+1,y));
}

  

ll findFrequency(ll left,ll right, ll element) 
{ 
	
    ll a = lower_bound(dp[element].begin(),dp[element].end(),left) 
            - dp[element].begin(); 
  
    
    ll b = upper_bound(dp[element].begin(),dp[element].end(),right) 
            - dp[element].begin(); 
  
    return b-a; 
} 
void solve()
{

	cin>>n;
	
	if(n)
	cin>>s;
	
	for(ll i=0;i<n;i++)
		s[i]=tolower(s[i]);
	//cout<<s;
	for(ll i=0;i<n;i++)
	{
		A.push_back(s[i]-'a');
		//cout<<A[i]<<" ";
	}
	//cout<<endl;
	
	if(n)
	build(1,0,n-1);
	

    //for(ll i=1; i <2*n;i++)
        //cout<<tre[i]<<" ";
	for (int i=0; i<n; ++i) 
		dp[A[i]].push_back(i+1);
        
	ll q;cin>>q;
	while(q--)
	{
		ll a,b;
		cin>>a>>b;
		
		ll ele = mx(a,b,1,0,n-1);
		cout<<findFrequency(a+1, b+1, ele) <<endl; 
		
	}
	
	
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
