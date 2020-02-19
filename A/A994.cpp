#include<iostream>
#include<vector>
using namespace std;
main()
{   vector<int> a,b;
    
    int m,n,x;
    cin>>m>>n;
    while (m--)
    {
        cin>>x;
        a.push_back(x);
    }
    while (n--)
    {
        cin>>x;
        b.push_back(x);
    }
    for(auto it=a.begin();it != a.end();it++)
    {
        for(auto it1=b.begin(); it1 != b.end();it1++)
        {
            if(*it == *it1)
            {
                cout<<*it<<" ";
            }
        }
    }
    
    

}