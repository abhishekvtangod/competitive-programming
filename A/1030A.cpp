#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
 
    int q,x,flag=0;cin>>q;
    while(q--)
    {
        cin>>x;
        if(x == 1)
        {
            cout<<"HARD";
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"EASY";
    }
}