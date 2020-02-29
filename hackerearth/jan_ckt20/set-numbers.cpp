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
        int r;cin>>r; 
        int x=1;
        while ((x | (x + 1)) <= r) 
            x |= x + 1; 
        cout << x << "\n"; 

        // int n;
        // cin>>n;
        // cout<<(ll)(pow(2,(ll)(log2(n)))-1)<<"\n";


    }
    

  
  
    return 0;
}