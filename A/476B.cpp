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

    string s1,s2;
    cin>>s1;cin>>s2;
    ll s11=0,s22=0,que=0;
    for(ll i =0 ; i < s1.size(); i++)
    {
        if(s1[i] == '+')
            s11++;
        else
        {
            s11--;
        }

        if(s2[i] == '+')
        {
            s22++;
        }
        else if (s2[i] == '-')
        {
            s22--;
        }
        else
        {
            que++;
        }
        
    }
    
    ll b =abs(s11-s22);

    if(que == 0 && b == 0)
    {   float rand = 1;
        printf("%0.12f",rand);
    }

    cout<<b;

    return 0;
}