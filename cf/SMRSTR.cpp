// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while (t--)
    {
        ll n,q,in,prod=1;
        cin>>n>>q;
        while (n--)
        {
            cin>>in;
            if(in >1 && prod <= 1e9)
            prod*=in;
        }
        while (q--)
        {
            cin>>in;
            if(in < prod)
                cout<<"0 ";
            else
                cout<<in/prod<<" ";
        }
        cout<<endl;
        
        
    }
    

    return 0;
}