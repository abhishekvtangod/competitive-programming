#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
    int n,max;
    
    cin>>n;
    if(n == 2)
        max = 2;
    else if(n == 3) 
        max = 4;
    else if(!(n%2))
        max = n+n/2;
    else if(n%2)
        max = n+n/2 + 1;

    cout<<max;
    
}