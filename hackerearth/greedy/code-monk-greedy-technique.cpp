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

    ll t;
    cin>>t;
    while (t--)
    {
        string a,b;
        cin>>a>>b;

        sort(b.begin(),b.end());
        auto it = b.begin();
        for(auto itt = a.begin();itt != a.end();itt++)
        {

            if((*itt) > (*it))
            {
                *itt = *it;
                it++;
            }
            if(it == b.end())
                break;
        }
        cout<<a<<'\n';
        
    }
    

    return 0;
}