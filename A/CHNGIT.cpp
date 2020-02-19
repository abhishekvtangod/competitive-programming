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

    int q;cin>>q;
    while (q--)
    {
        map<int,int> mp;
        int n,c=0;cin>>n;
        while (n--)
        {
            int x;cin>>x;
            mp[x]++;
            c++;
        }
        int max=0;
        for(auto it=mp.begin(); it != mp.end(); it++)
        {
            if(max < it->second)
            {
                max = it->second;
            }
        }
        cout<<c-max<<endl;


    }
    

    return 0;
}