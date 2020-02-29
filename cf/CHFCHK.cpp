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
        int n;cin>>n;
        vector<int> v;
        while (n--)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout<<*v.begin()<<endl;
        
    }
    

    return 0;
}