#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
   int m,n,s=0;
    cin>>n>>m;
     m %= (n * (n + 1) / 2);
    for(int i=1;i<=n;i++)
    {
        if(m<i)
            break;

        m-=i;
    }
    cout<<m;
 
}