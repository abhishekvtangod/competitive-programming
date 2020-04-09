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




void solve()
{
	ll n;cin>>n;
	
	string s;
	if(n)
	cin>>s;
	if(n==0)return;
	else if(n==1)
	{
		cout<<"0\n"<<s;return;
	}
	else if(n == 2 )
	{
		cout<<((s[0]==s[1])?"1\n":"0\n");
		if(s[0]==s[1])
		{	n=2;ll i=0;
			if(s[n-2] == 'R')
			{
				s[i+1] = 'B';
			}
			else if(s[n-2] == 'G')
			{
			s[i+1] = 'R';	
			}
			else
			{
				s[i+1] = 'R';
			}
		}
		cout<<s;
		return;
	}
	ll cnt=0;
	for(ll i=0; i<n-2; i++)
	{
		
		if((s[i] == s[i+1]) && (s[i+1] == s[i+2]))
		{
			if(s[i] == 'R')
			{
				s[i+1]='B';
			}
			else if(s[i] == 'G')
			{
				s[i+1]='B';
			}
			else
			{
				s[i+1]='G';
			}
			cnt++;
			
		}
		else if((s[i] == s[i+1]) && (s[i+1] != s[i+2]))
		{
			if(s[i] == 'R' && s[i+2] == 'B')
			{
				s[i+1]='G';
			}
			else if(s[i] == 'R' && s[i+2] == 'G')
			{
				s[i+1] = 'B';
			}
			else if(s[i] == 'B' && s[i+2] == 'R')
			{
				s[i+1] = 'G';
			}
			else if(s[i] == 'B' && s[i+2] == 'G')
			{
				s[i+1] = 'R';
			}
			else if(s[i] == 'G' && s[i+2] == 'R')
			{
				s[i+1] = 'B';
			}
			else if(s[i] == 'G' && s[i+2] == 'B')
			{
				s[i+1] = 'R';
			}
			
			
			cnt++;
		}
	}
	if(s[n-2] == s[n-1])
	{
		ll i=n-1;
		if(s[n-2] == 'R')
		{
			s[i] = 'B';
		}
		else if(s[n-2] == 'G')
		{
		s[i] = 'R';	
		}
		else
		{
			s[i] = 'R';
		}
		cnt++;
	}

	cout<<cnt<<endl<<s<<endl;
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
