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
	ll n, k;
    cin >> n >> k;
    vector<ll> v1;
    if ((n - k + 1) % 2 == 1 && n - k + 1 >= 0)
    {
        for (int i = 1; i < k; i++)
        {
            v1.push_back(1);
        }
        v1.push_back(n - k + 1);
    }
    else if ((n - (k - 1) * 2) % 2 == 0 && (n - (k - 1) * 2) != 0 && n - 2 * (k - 1) >= 0)
    {
        for (int i = 1; i < k; i++)
        {
            v1.push_back(2);
        }
        v1.push_back(n - 2 * (k - 1));
    }
    else
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (int i = 0; i < k; i++)
        cout << v1[i] << " ";
    cout << "\n";

	
	
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
