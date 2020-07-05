
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
 
void solve()
{
    ll n,x,c=0,ans=0;cin>>n>>x;
    string s; cin>>s;
    string s1;
    ll f=1,i=0,e=n-1;
    for(;i<s.length();i++)
    {
    	if(s[i]=='1'){
    		f=0;
    		break;
    	}
    }
    if(!f)
    {
        i=0;
        if(s[i]=='0')
        {
            while(s[i]=='0'){
            	c++;
            	i++;
            	if(c>x)
            	{
            		ans++;
            		break;
            	}
            }
            c=0;
            while(s[i]=='0')
            {
                i++;
                c++;
                if(c==x+1){ans++;c=0;}
            }
        }
 	    ll j=s.length()-1;		
        if(s[j]=='0')
        {
            c=0;
            while(s[j]=='0'){c++;
            j--;
            if(c>x)
            {ans++;break;}
            }
            c=0;
            while(s[j]=='0')
            {
                j--;
                c++;
                if(c==x+1){ans++;c=0;}
            }
        }
    	c=0;
        for(;i<=e;i++)
        {
            if(s[i]=='1')
            {
                // cout<<c<<" ";
                if(c>=2*x+1){ans++;c-=(2*x+1);
                ans+=max(0LL,c/(x+1));}
                c=0;
            }
            else c++;
        }
        
    }
    else
    {
        c=0;ans++;
        
        for(int i=1;i<n;i++)
        {
            if(c==x){ans++;c=0;}
            else c++;
        }
    }
    cout<<ans<<"\n";
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