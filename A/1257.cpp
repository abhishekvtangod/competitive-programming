#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>   
typedef long long ll;

using namespace std;
main()
{
    int q,n,x,a,b;
    cin>>q;

    while (q--)
    {
        cin>>n>>x>>a>>b;
        if(a > b)
        {
            int t = a;
            a = b;
            b = t;
        }
    
    for(int i = 0; i < n && x != 0; i++)
    {
        if(b < n)
        {
            b++; x--;
        }
        else if (a > 1)
        {
            a--;x--;
        }
        
    }
    cout<<abs(a-b)<<endl;


    }

 
}