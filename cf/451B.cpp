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

    ll t,x;cin>>t;
    vector<ll> a,b;
    while (t--)
    {
        cin>>x;
        a.push_back(x);
        b.push_back(x);

    }
    sort(b.begin(),b.end());
    ll f = 0;
    for(ll i =0; i < a.size(); i++)
    {
        if(a[i] != b[i])
        {
            f= i;
            break;
        }
    }
    ll l = f;
    for(ll i = a.size()-1; i>=0; i--)
    {
        if(a[i] != b[i])
        {
            l = i;
            break;
        }
    }
    reverse(a.begin()+f,a.begin()+1+l);

    // for(auto u : a)
    //     cout<<u<<" ";
    // cout<<endl;
    // for(auto u : b)
    //     cout<<u<<" ";
    // cout<<endl;

    if(a == b)
    {
        cout<<"yes\n"<<f+1<<" "<<l+1;
        
    }
    else
    {
        cout<<"no\n";
    }
    

    // ll t,x;
    // cin>>t;
    // vector<ll> v;
    // while (t--)
    // {
    //     cin>>x;
    //     v.push_back(x);
    // }
    // ll f=0;
    // // ll l = v.size()-1;
    // for(ll i =0;i < v.size()-1;i++)
    // {
    //     if(v[i+1] < v[i])
    //     {
    //         f = i;
    //         break;
    //     }
    // }
    // ll l = f;
    // for(ll i =v.size()-1; i>0; i--)
    // {
    //     if(v[i-1] > v[i])
    //     {
    //         l = i;
    //         break;
    //     }
    // }

    // reverse(v.begin()+f,v.begin()+l+1);
    // // cout<<"-----"<<v[f]<<" "<<v[l]<<endl;

    // // cout<<"f: "<<f<<" l:"<<l<<endl;
    // ll flag=0;
    // for(auto it = v.begin(); it != (v.end()-1); it++)
    // {
    //     if((*it) > (*(it+1)))
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }

    // flag?cout<<"no\n":cout<<"yes\n";
    // if(!flag)
    // {
    //     // for(ll i =f; i<=l; i++)
    //     //     cout<<v[i]<<" ";
    //     cout<<f+1<<" "<<l+1<<"\n";
    // }

    return 0;
}