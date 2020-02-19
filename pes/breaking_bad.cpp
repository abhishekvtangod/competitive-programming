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

    ll q;
    cin>>q;
    while(q--)
    {
        vector<char> s;
        int siz;
        cin>>siz;
        while (siz--)
        {
            char inp;cin>>inp;
            s.push_back(inp);
        }
        
        string k="bad";
        int flag = 0;
        int x = s.size();
        int a=0,b=0,d=0;
        for(int i = 0,j=0; i < s.size();i++)
        {
            if(s[i] == k[j])
            {
                j++;
                
            }
            if(j == 1)
            {
                a=i;
            }
            if(j == 2)
            {
                b = i;
            }
            if(j == 3)
            {
                d = i;
            }

            if(j == 3)
            {
                x-=3;
                auto it = s.begin();
                // s.erase(s.begin()+a);
                // s.erase(s.begin()+b-1);
                // s.erase(s.begin()+d-2);
                s[a] = '0';
                s[b-1] = '0';
                s[d-2] = '0';

                i=-1;
                j=0;

            }

        }
        cout<<x<<endl;

    }

    return 0;
}