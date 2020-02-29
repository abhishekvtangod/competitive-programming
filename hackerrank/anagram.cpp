// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define as(n,a,b) assert(a<=n && n<=b);
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()%2)
        {
            cout<<"-1\n";
            continue;
        }

        vector<char> a(s.begin(),s.begin()+(s.size()/2)),b(s.begin()+(s.size()/2),s.end());
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        string c;
        auto it = set_difference(a.begin(),a.end(),b.begin(),b.end(),c.begin());
        c.resize(it-c.begin());
        cout<<c.size()<<endl;
    }


    return 0;
}