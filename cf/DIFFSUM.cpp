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

    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<a-b;
    else
    {
        cout<<a+b;
    }
    

    return 0;
}