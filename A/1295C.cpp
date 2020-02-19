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

    ll q;cin>>q;
    while (q--)
    {
        string s,t;
        cin>>s>>t;
        ll j=0,count=0,flag=0;
        for(ll k =0;k < t.size();k++)
        {

            if(j == t.size())
            {
                flag=1;
                break;
            }

             
            count++;   
            for(ll i =0;i< s.size();i++)
            {
                if(j == t.size())
                {
                    flag=1;
                    break;
                }
                if(s[i] == t[j])
                {
                    j++;
                    // k = j;

                }
                
            }
 
        }
        if(flag)
            cout<<count<<endl;
        else
        {
            cout<<"-1"<<endl;
        }
        



    }
    

    return 0;
}