/**
 *    author:  abhishekvtangod
 *    created: 24.04.2020 17:58:43 IST       
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

//ll mxN = 5e6+6;
ll dot[5000000+6];
bool prime[5000000+6];

vector<ll> prime_nos;

void prime_cal(ll z)
{
    memset(prime,true,5000001);
    for (ll p=2; p*p<=z; p++) 
    { 
        if (prime[p] == true) 
        {   
            for (ll i=p*p; i<=z; i += p) 
                prime[i] = false;
        } 
    }
    
    for(ll i=2;i<=z;i++)
        if(prime[i])
            prime_nos.push_back(i);
}    
void dot_compute(ll z)
{
    ll j;
    for(ll i=4;i<=z;i++)
    {
        if(prime[i]==true)
            dot[i]=((i*(i-1))/2)%mod;
        else{
            
            for(j=0;j<(ll)prime_nos.size();j++)
            {
                if(i%prime_nos[j]==0)
                    {dot[i]= (((i/prime_nos[j])*dot[prime_nos[j]])%mod+dot[i/prime_nos[j]])%mod;break;}
            }
        }
    }
}
void solve()
{
    ll x,y,z;cin>>x>>y>>z;
    dot[0]=dot[1]=0;dot[2]=1;dot[3]=3;
    prime_cal(z);
    dot_compute(z);
    ll fin=0;
    for(ll i=z;i>=y;i--)
     {
         fin=(fin*x+dot[i])%mod;
     }
     cout<<fin<<"\n";
}

int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ll t;cin>>t;
    // while(t--)
        //{
            solve();
        //}


    return 0;
}
