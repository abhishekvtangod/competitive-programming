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
        ll x;cin>>x;
        ll sum = 0;
        string v;cin>>v;

        ll f=0;

        for(ll i =0 ; i < x; i++)
        {
            sum += v[i];
        }
        
        while(v.size())
        {
        if(*(v.end()-1) %2 == 0)
        {
            sum -= *(v.end() -1);

            v.pop_back();
        }
        else
        {
            if(sum %2 == 0)
            {
                f=1;
                cout<<v<<endl;
                break;
            }
            else
            {
                sum -= *(v.end() -1);
                    
                v.pop_back();

            }
            
        }}
        if(f == 0)
        {
            cout<<"-1\n";
        }
        
        

                
    }
    

    return 0;
}