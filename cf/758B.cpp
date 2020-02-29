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

    string s;
    cin>>s;
    ll r,y,b,g;
    for(ll i=0; i < s.size();i++)
    {
        if(s[i] == '!')i++;

        if(s[i] == 'R')r=i%4;
        else if (s[i]== 'G')
        {
            g = i%4;
        }
        else if (s[i] == 'Y')
        {
            y=i%4;
        }
        else if (s[i]== 'B')
        {
            b=i%4;
        }
        
        
        
    } 
    // cout<<r<<" "<<b<<" "<<y<<" "<<g<<endl;
    ll cr=0,cb=0,cy=0,cg=0;
    for(ll i =0; i < s.size();i++)
    {
        if(s[i] == '!')
        {
            if(g == (i%4))cg++;
            else if(y==(i%4))cy++;
            else if(b==(i%4))cb++;
            else if(r == (i%4))cr++;


        }

    }
    cout<<cr<<" "<<cb<<" "<<cy<<" "<<cg<<endl;

    return 0;
}