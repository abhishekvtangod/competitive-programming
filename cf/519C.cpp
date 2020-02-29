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

    ll n,m,count=0;
    cin>>n>>m;
    ll res=0;
    while(n != 0 && m != 0 && m + n > 2)
    {
        if(n > m)
        {
            n-= 2;
            m--; 
            res++;

        }
        else
        {
            n--;
            m -= 2; 
            res++;
        }
        // cout<<n<<" "<<m<<endl;

    }
    cout<<res;
    return 0;
}