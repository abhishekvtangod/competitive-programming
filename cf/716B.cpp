/**
 *    author:  abhishekvtangod
 *    created: 09.04.2020 15:30:21 IST
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

ll cnt=0;
	
bool chk()
{
	return cnt==26;
}


void solve()
{
	string s;cin>>s;
	if(s.size() < 26)
	{
		cout<<"-1";return;
	}
	ll found=0;
	ll freq[28];
	
	
	for(ll i=0;i<=s.size()-26;i++)
	{
		cnt =0;
		for(ll ii=0;ii<26;ii++)freq[ii]=0;
		
		
		for(ll j=i; j<i+26;j++)
		{
			if(s[j] == '?')cnt++;
			else if(freq[s[j]-'A'] == 0){
				freq[s[j]-'A']++;cnt++;
					
				if((freq[s[j]-'A']) > 1){cout<<freq[s[j]-'A'];break;}
			}
			
			//cout<<s[j]-'A'<<"->"<<freq[s[j]-'A']<<endl;

		}
		
		if(chk())
		{
			found=1;
			ll pos = 0;
			for(ll j=i; j<i+26;j++)
			{
				if(s[j] == '?')
				{
					while(freq[pos++]);
					
						s[j]= pos+'A'-1;
						//cout<<s[j];
					
				}
			}
			//cout<<endl;
			for(ll k=0; k <s.size();k++)
			{
				if(s[k] == '?')
					cout<<"A";
				else
					cout<<s[k];
			}
			break;
		}
		
		
	}
	if(!found)
	{
		cout<<"-1";
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
