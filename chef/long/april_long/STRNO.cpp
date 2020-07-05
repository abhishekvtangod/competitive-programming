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

ll countPowersPrimeFactors(int n)  
{  
	ll cnt=0;
    while (n % 2 == 0)  
    {  
		cnt++;  
        n = n/2;  
    }  
  

    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
			cnt++;  
            n = n/i;  
        }  
    }  
  
    
    if (n > 2)  
		cnt++;
	
	return cnt;
}  

void solve()
{
	ll x,k;
	cin>>x>>k;
	if(k<=countPowersPrimeFactors(x))
	{
		cout<<"1\n";
	}
	else
		cout<<"0\n";
	
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
