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
	ll a,b;cin>>a>>b;
	//cout<<((b-a)%b+b)%b<<'\n';	
		
	cout<<((a>b)?
				((a%b)?
					(b-(a%b))
					:0)
				:(b-a))<<'\n';
}



int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t;cin>>t;
	while(t--)
	{
		solve();
	}
	

    return 0;
}
