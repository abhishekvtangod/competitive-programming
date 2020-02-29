#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int q,k,x,n,count,count_num=0;
    cin>>q>>k;
    while (q--)
    {   count=0;
        cin>>x;
        while (x)
        {
            n=x%10;
            x/=10;
            if(n == 4 || n == 7)
                count++;
        }
        if(count <= k)
            count_num++;
        
    }
    cout<<count_num;
    
 
}