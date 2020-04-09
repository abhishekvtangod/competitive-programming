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

		ll n;cin>>n;
		char x;
		vector<char> a,b;
		a.push_back('1');
		b.push_back('1');
		
		ll i =1;
		if(n>=1)
		cin>>x;
		for(; i < n; i++)
		{
			cin>>x;
			if(x == '2')
			{
				a.push_back('1');
				b.push_back('1');
			}
			else if(x == '1')
			{
				a.push_back('1');
				b.push_back('0');
				i++;
				break;
			}
			else
			{
				a.push_back('0');
				b.push_back('0');

			}
		}
		for(;i<n;i++)
		{
			cin>>x;
			a.push_back('0');
			b.push_back(x);

		}
		for(auto u:a)
			cout<<u;
		cout<<'\n';
		for(auto u:b)
			cout<<u;
		cout<<'\n';
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
