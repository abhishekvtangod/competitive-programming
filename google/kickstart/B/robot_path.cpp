/**
 *    author:  abhishekvtangod
 *    created: 19.04.2020 04:55:12 IST
**/

#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000000
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
ll N,W,E,S;
ll x=1,y=1;
void expand(string s)
{	s = "1("+s+")";
	N=0,W=0,E=0,S=0;
	x=0,y=0;
	ll cur=1;
	ll prev=1;
	for(ll i=1; i<s.size();i++)
	{
		
		if(s[i] == '(')
		{	
			
			cur = (cur * (s[i-1]-'0'));
			
			prev = (s[i-1]-'0');
			
		}
		if(s[i] == ')')
		{
			
			
			cur = cur/prev;
			prev = cur;
			
		}
		else
		{
			if(s[i] == 'N') y-=cur;
			else if(s[i] == 'S') y+=cur;
			else if(s[i] == 'E') x+=cur;
			else if(s[i] == 'W') x-=cur;			
		}
		
	}
	
	

}


void solve()
{
	string s;cin>>s;
	expand(s);
	
	ll i,j;
	
	//cout<<x<<" "<<y<<endl;
	x%=mod;
	y%=mod;
	//cout<<x<<" "<<y<<endl;	
	if(x<0)x+=mod;
	if(y<0)y+=mod;
	//cout<<x<<" "<<y<<endl;
	//cout<<y+1<<" "<<x+1;
	cout<<x+1<<" "<<y+1;

}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t;cin>>t;
	ll i=1;
	while(t--)
	{
		N=0,W=0,E=0,S=0;
	
		cout<<"Case #"<<i<<": ";
		solve();
		i++;
		cout<<"\n";
	}
	

    return 0;
}
