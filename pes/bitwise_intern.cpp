// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

void func(int a,int b)
{
    int res = a,xr = a,o=a;
    // ll sum = (b*(b+1)/2) - ((a+1)*(a+2)/2); 
    for(int i= a+1;i <= b; i++)
    {
        xr ^= i;
        o |= i;
        res += o ;
    }
    cout<<(res+xr)%mod<<endl;
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int q;cin>>q;
    while (q--)
    {
        int a,b;
        cin>>a>>b;
        func(a,b);
    }
        

    return 0;
}