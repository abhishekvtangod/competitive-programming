#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{   
    int q,n,x,y,d;
    cin>>q;
    while (q--)
    {
        cin>>n>>x>>y>>d;
        if((x-y)%d == 0)
            cout<<abs((x-y)/d)<<endl;
        else if ((y-1)%d == 0)
        {
            cout<<((x-1)/d)+((y-1)/d)<<endl;
        }
        else if ((n-y)%d == 0)
        {
            cout<<((n-x)/d)+((n-y)/d)<<endl;
        }
        else
        {
            cout<<"-1";
        }
        
    }
    
}