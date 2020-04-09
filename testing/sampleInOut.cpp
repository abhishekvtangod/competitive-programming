// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll n;cin>>n;
	vector<ll> v;
	ll x;
	while(n--)
	{
		cin>>x;
		v.push_back(x);
	}
	for(auto u:v)
	{
	
		cout<<u<<" ";
	}
	
	
    return 0;
}
