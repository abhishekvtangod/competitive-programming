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

    int t;cin>>t;
    while (t--)
    {
        int n,a,b,c,d,p,q,y;
        vector<int> v;
        cin>>n>>a>>b>>c>>d>>p>>q>>y;
        
        while (n--)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        int o;
        int x = abs(v[a-1]-v[b-1]) * p;
        if(abs(v[a-1]-v[c-1])*p <= y)
        {
            o = y + (abs(v[c-1]-v[d-1]) * q)+(abs(v[d-1]-v[b-1])*p);
        }
        else
        {
            o=x;
        }
            
        if(x>=o)
        {
        cout<<o<<endl;
            
        }
        else
        {
                    cout<<x<<endl;

        }
        
    


    }
    

    return 0;
}