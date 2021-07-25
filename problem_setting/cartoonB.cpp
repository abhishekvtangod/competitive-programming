/**
 *    author:  abhishekvtangod
 *    created: 2020-07-08 02:51
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


// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };

 
 
void solve()
{
	ll n,x;cin>>n;
	vector<ll> a,b,p;
	//vector<ll> p
	p.resize(n);
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		b.push_back(x);		
	}
	for(ll i=0;i<n;i++)
	{
		p[i]=(a[i]-b[i]);
				
	}	
	ll ans=0;
	oset<pair<ll,ll>> indexed_set;
	for(ll i=0; i<n;i++)
	{
		x = p[i];
		ans+=indexed_set.order_of_key({x,-1});
		indexed_set.insert({-x,i});
	}
	
	//or
	
	//for(ll i=n-1; i>=0;i--)
	//{
		//x = p[i];
		//ans+=indexed_set.order_of_key({x,-1});
		//indexed_set.insert({-x,i});
	//}
	ll total = n*(n-1)/2;
	// cout<<total-ans<< endl;
	// cout<<ans<<'\n';
	string aa = "Nobita.", bb = "Doraemon.";
	ll nob = ans;
	ll dor = total-ans;
	if(nob >= dor){
		cout << aa << endl << nob << endl;
	}
	else{
		cout << bb << endl << dor << endl;
	}
}
 
void solve2()
{
	ll n,x;cin>>n;
	vector<ll> a,b,p;
	//vector<ll> p
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		b.push_back(x);		
	}
	for(ll i=0;i<n;i++)
	{
		p.push_back(a[i]-b[i]);
				
	}	
	sort(p.begin(),p.end());
	
	ll l=0,r=p.size()-1;
	ll ans=0;
	while(l<r)
	{
		if(p[l]+p[r]<=0)
		{
			ans+=(r-l);
			l++;
		}
		else
			r--;
	}
	// cout<<(n*(n-1)/2)-ans<<'\n';

	string aa = "Nobita.", bb = "Doraemon.";
	ll nob = (n*(n-1))/2- ans;
	ll dor = ans;
	if(nob >= dor){
		cout << aa << endl << nob << endl;
	}
	else{
		cout << bb << endl << dor << endl;
	}
	
}
 
int main()
{   
	IOS;
 
 	#ifndef ONLINE_JUDGE
		freopen("/home/abhi/Documents/input.txt", "r", stdin);
		freopen("/home/abhi/Documents/output.txt", "w", stdout);
	#endif
 
	// ll t;cin>>t;
	// while(t--){
		solve();
	// }
	
 
    return 0;
}