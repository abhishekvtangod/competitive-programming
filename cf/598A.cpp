#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
typedef long long ll;
using namespace std;

main()
{
    ll q,n,sm;
    cin>>q;
    while (q--)
    {
        cin>>n;
        int x;
        // for(int i = n; i >=1; i--)
        // {
        //     if(log2(n) == (int)log2(n))
        //     {
        //         x = i;
        //         cout<<"---"<<x<<"---"<<endl;
        //         break;
        //     }
        // }
        // sm = ((n*(n+1))/2) - (2*(pow(2,(x-1))-1));
        sm = n*(n+1)/2;
        x = 1;
        while (x <= n)
        {
            sm -= 2*x;
            x*=2;
        }
        
        
        
        cout<<sm<<endl;
    }
    
}