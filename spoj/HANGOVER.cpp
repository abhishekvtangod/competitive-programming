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

    double n;
    cin>>n;
    while(n != 0)
    {
    double sum=0;
        // float ans = 1+log(3+2*n)/3;
        double i =2;
        for(i=2,sum = 0; sum <= n ;i++)
        {
            sum+=1/(float)i;
        }        
        cout<<(int)i-2<<" card(s)"<<endl;
        cin>>n;
    }
    

    return 0;
}