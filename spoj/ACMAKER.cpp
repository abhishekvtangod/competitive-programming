/**
 *    author:  abhishekvtangod
 *    created: 12.04.2020 09:06:09 IST
 *    recurrence relation: 2D Dynamic Programming
		
				m: Length of str1 (first string)
				n: Length of str2 (second string -> acronym)

				If last characters of two strings are same, 
				   1. We consider last characters and get count for remaining 
					  strings. So we recur for lengths m-1 and n-1. 
				   2. We can ignore last character of first string and 
					  recurse for lengths m-1 and n.
					lookup[i][j] = lookup[i-1][j-1]+lookup[i-1][j]				
				
				else 
				If last characters are not same, 
				   We ignore last character of first string and 
				   recurse for lengths m-1 and n.
					lookup[i][j] = lookup[i-1][j]
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

ll count (string a,string b)
{
	ll dp[155][155]={{0}};
	ll m = a.length();
	ll n = b.length();
	
	
}


void solve()
{
	ll n;cin>>n;
	set<string> insg;
	string s;
	for(ll i=0; i <n;i++)
	{

		cin>>s;
		insg.insert(s);
	}
	while(1)
	{
		string sf;cin>>sf;
		cin.ignore();
		getline(cin,s);
		if(s == "CASE")break;
		
		stringstream st(s);
		string word;
		vector<string> final_str;
		while(st >> word)
		{
			if(insg.find(word) == insg.end())
			{
				final_str.push_back(word);
			}
		}
		//cout<<count();
		
			
			
	}
	
	

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
