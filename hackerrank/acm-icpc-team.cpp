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

    ll m,n;
    cin>>n>>m;
    string s[n];
    int a[n];
    for(int i = 0; i < n ; i++)
    {
        cin>>s[i];
        a[i] = stoi(s[i],0,2);
    }
    
    for(int i = 0; i < n-1 ;i++)
    {
        for(int j=i; j < n;j++)
        {

        }
    }


    return 0;
}