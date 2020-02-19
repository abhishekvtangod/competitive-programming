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

    ll t;cin>>t;
    while (t--)
    {
        ll n,x,finX=0;cin>>n;
        vector<ll> a,b;
        for(ll i =0; i<n;i++)
        {
            cin>>x;
            a.push_back(x);
            finX ^= x;
        }
        for(ll i =0; i<n;i++)
        {
            cin>>x;
            b.push_back(x);
            finX ^= x;
        
        }
        vector<ll> ans;
        for(ll i =0; i <n;i++)
        {
            ans.push_back(a[i]^finX);
        }
        vector<ll> ans_sort(ans.begin(),ans.end());
        sort(ans.begin(),ans.end());
        sort(b.begin(),b.end());
        ll flag=0;
        for(ll i =0; i <n;i++)
        {
            if(ans[i] != b[i])
            {
                flag = 1;break;
            }
        }
        if(flag)
        {
            cout<<"-1\n";
        }
        else
        {
            for(ll i =0; i <n;i++)
                cout<<ans_sort[i]<<" ";
            cout<<endl;
        }
            
    }
        
        
    
    
    

    return 0;
}