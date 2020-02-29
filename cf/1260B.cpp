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
    ll n,x,y;
    cin>>n;
    while (n--)
    {
        cin>>x>>y;
        if(x<y)
            swap(x,y);
        
        if(((x+y)%3 == 0) && (x <= y*2))
            cout<<"yes\n";
        else
        {
            cout<<"no\n";
        }
        
    
    }
    
    

    return 0;
}