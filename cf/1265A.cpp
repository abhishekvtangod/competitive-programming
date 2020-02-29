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
    while (t--)
    {
        string s;
        cin>>s;

        auto it = s.begin();
        if(*it == '?')
        {
            if(*(it+1) == 'a')
            {
                *it = 'b';
            }
            else if (*(it+1) == 'b')
            {
                *it = 'a';
            }
            else if(*(it+1) == 'c')
            {
                *it = 'a';
            }
            else
            {
                *it = 'a';
            }
            
            
        }

        for(it++; it != s.end(); it++)
        {
            if(((*it)=='a' && *(it-1)=='a') || ((*it)=='a' && *(it+1)=='a') || ((*it)=='b' && *(it-1)=='b') || ((*it)=='b' && *(it+1)=='b') || ((*it)=='c' && *(it-1)=='c') || ((*it)=='c' && *(it+1)=='c'))
            {
                cout<<"-1\n";
                it++;
            }
            else if (*it == '?')
            {
                
            }
            

            
        }


    }
    

    return 0;
}