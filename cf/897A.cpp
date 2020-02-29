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

    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll l,r;
    char c1,c2;

while(k--)
{
 
 
        cin>>l>>r>>c1>>c2;

    for(int i = l-1; i<= r-1;i++)
    {
            // cout<<s[i]<<endl;

        if(s[i] == c1)
            s[i] = c2;

            // cout<<s[i]<<endl;
    }
}
    cout<<s<<endl;

    return 0;
}