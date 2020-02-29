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
    int n,x1,y1,x2,y2,x=0,y=0,sq=0;
    cin>>n;
    while (n--)
    {
        cin>>x1>>y1>>x2>>y2;
        x = x2 - x1 + 1;
        y = y2 - y1 + 1;

        sq += x*y;
    }
    cout<<sq;

    
}