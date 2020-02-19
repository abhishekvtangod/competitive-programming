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

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        if(n%2 == 0)
        {
            while (n != 0)
            {
                cout<<"1";
                n-=2;
            }
            cout<<endl;
            
        }   
        else
        {
            cout<<"7";
            n-=3;
            while (n != 0)
            {
                cout<<"1";
                n-=2;
            }
            cout<<endl;   
            
        }
        
    }
    

    return 0;
}