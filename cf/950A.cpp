#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int l,r,a,t;
    cin>>l>>r>>a;
    if(r < l)
    {
        t = l;
        l = r;
        r = t;
    }
    l = l + a;
    if(l < r)
        cout<<l*2;
    else
    {
            cout<<(r+(l-r)/2)*2;
    }
    
 
}