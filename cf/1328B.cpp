// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;


void solve()
{
		ll n,k;
		cin>>n>>k;
		ll x =1; 
		x = ceil((-1.0+sqrt(1+8*k))/2.0);
		ll b1 = n-x-1;
		ll b2 = n-(k-(x*(x-1)/2));
		
		for(ll i=0;i<n;i++)
		{
			if(i != b1 && i != b2)
			{
				cout<<'a';
			}
			else
			{
				cout<<'b';
				
			}
		}
		
		cout<<'\n';
	
		//cout<<x<<"---"<<y<<endl;
		
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	cout.tie(nullptr);

	ll t;cin>>t;
	while(t--)
	{
		solve();
	}
	

    return 0;
}
