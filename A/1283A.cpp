#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int q;cin>>q;
    while (q--)
    {
        int a,b;
        cin>>a>>b;
        
        int min = (23-a)*60 + (60-b);
        cout<<min<<endl;

    }
    
}