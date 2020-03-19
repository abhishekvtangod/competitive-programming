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
 
    ll t;cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll sum = 0,index=0;
        for(ll i =1; i<=n ; i++)
        {
            sum += i;
 
            if(sum >= n)
            {
                sum -= i;
                index=i;
                break;
            }
        }
        int temp=n-sum;
        int total=index+1;
        if(index%2)
            cout<<"("<<temp<<","<<total-temp<<")\n";
        else
            cout<<"("<<total-temp<<","<<temp<<")\n";
 
    }
    
 
    return 0;
} 