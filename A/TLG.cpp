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

    int q;cin>>q;
    int x,y,a=0,m=0,n=0,f=0;
    while (q--)
    {   
        cin>>x>>y;
        m+=x;n+=y;
        if(m>n && abs(m-n)>a)
        {
            f=1;a=abs(m-n);
        }
        else if (m<n && abs(m-n)>a)
        {
            f=2;a=abs(m-n);
        }
        
    }
        cout<<f<<" "<<a;
        
    return 0;
}