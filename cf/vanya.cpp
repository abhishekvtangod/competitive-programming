#include<iostream>
using namespace std;
// typedef long ll;
main()
{
    int n,h = 0;
    cin>>n;
    int i = 0;
    while (i<=n)
    {
        
        h++;
        i += (h*(h+1))/2;
    }
    cout<<h-1;
    
    // height = n 
    
}