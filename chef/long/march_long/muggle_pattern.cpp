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

    ll t;cin>>t;
    while (t--)
    {
        ll pos;
        cin>>pos;
        

        ll diag = ceil((-1 + sqrt(1+8*pos))/2);
        ll total_pos = diag*(diag+1)/2;

        ll inDiagPos = total_pos-pos+1;

        if(diag%2)
            cout<<"("<<diag-inDiagPos+1<<","<<inDiagPos<<")\n";
        else
        {
            cout<<"("<<inDiagPos<<","<<diag-inDiagPos+1<<")\n";
            
        }
                


    }
        

    return 0;
}