#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int m,n;
    char x;
    int flag = 0;
    cin>>m>>n;
    for(int i = 0; i < m*n; i++)
    {
        cin>>x;
        if(x == 'C' || x=='M' || x=='Y')
        {
            cout<<"#Color";
            flag = 1;
            break;
        }
    }
    if(!flag)
    {
        cout<<"#Black&White";
    }
}