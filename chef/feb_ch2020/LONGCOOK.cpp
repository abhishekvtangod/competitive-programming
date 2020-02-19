// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

// bool leap(ll n)
// {
//     if(n%400 == 0)
//         return true;
//     if(n%100 == 0)
//         return false;
    
//     if(n%4 == 0)
//         return true;
//     return false;
// }

ll leapyr(ll year)
{
    if(year>0)
    {
        year--;
        return ((year/4) - (year/100) + (year/400));
    }
    else
    {
        return 0;
    }
    
}

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while(t--)
    {
        ll m1,y1,m2,y2;
        cin>>m1>>y1>>m2>>y2;
        ll count = 0;


        // for(int i = y1+1; i <= y2-1; i++)
        // {
        //     if(leap(i) == true)
        //     {
        //         count++;
        //         // cout<<i<<endl;
        //     }
        // }

        ll start = y1+1;
        ll end = y2-1;
        if(m2>=2)
            end = y2;

        if(m1<=2)
            start = y1;
        
        count += leapyr(end+1) - leapyr(start);
        // cout<<leapyr(end)<<" "<<leapyr(start)<<" "<<end<<" "<<start<<endl;
        cout<<count<<endl;

    }
    
    return 0;
}