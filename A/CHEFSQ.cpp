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
        vector<int> a,b;
        int n,s,x;
        cin>>n;
        while (n--)
        {
            cin>>x;
            a.push_back(x);
        }
        cin>>s;
        while (s--)
        {
            cin>>x;
            b.push_back(x);
        }
        unsigned int j = 0;
        for(int i = 0 ; i < a.size(); i++)
        {
            if(b[j] == a[i])
            {
                j++;
                if(j == b.size())
                {
                    cout<<"Yes\n";
                    break;
                }
            }
            
            
            // cout<<"i>"<<i<<": j>"<<j<<endl;
        }
        if(j != b.size())
        {
            cout<<"No\n";
        }

        
        
    }
    

    return 0;
}