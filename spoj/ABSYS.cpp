// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define as(n,a,b) assert(a<=n && n<=b);
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while(t--)
    {
        string a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        int mach=0,mark=0;
        for(int i = 0; i< a.size(); i++)
        {
            if(a[i] == 'm')
            {
                mark = 1;
                break;
            }
        }
        for(int i = 0; i< c.size(); i++)
        {
            if(c[i] == 'm')
            {
                mark = 2;
                break;
            }
        }
        for(int i = 0; i< e.size(); i++)
        {
            if(e[i] == 'm')
            {
                mark = 3;
                break;
            }
        }

        if(mark == 1)
        {
            mach = stoi(e) - stoi(c);
            cout<<mach<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
        }
        else if (mark == 2)
        {
            mach = stoi(e) - stoi(a);
            cout<<a<<" "<<b<<" "<<mach<<" "<<d<<" "<<e<<endl;
            
        }
        else if (mark == 3)
        {
            mach = stoi(a) + stoi(c);
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<mach<<endl;
        
        }
             



    }

    return 0;
}