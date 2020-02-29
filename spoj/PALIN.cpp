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
    // getchar();

    while(t--)
    {
        string k,fin;
        cin>>k;
        ll n = k.size()/2;
        

        for(int i = 0; i < n ; i++)
        {
            fin.push_back(k[i]); 
        }

        if(k.size() %2)
            fin.push_back(k[n]);

        for(int i = n-1; i >= 0 ; i--)
        {
            fin.push_back(k[i]); 
        }

        if(a>b)
        {

        }
        else
        {
            
        }
        


        cout<<fin;
        


        

    }

    return 0;
}