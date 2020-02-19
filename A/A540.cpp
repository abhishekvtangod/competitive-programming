#include<iostream>
#include<vector>
using namespace std;
int m_diff(char a,char b)
{   int m = a - 'a';
    int n = b - 'a';
    int x = abs(m-n);
    int y = abs(10 - x);
    if(x >= y)
        return y;
    else
    {
        return x;
    }
    
}
main()
{   int n;
    char x;
    cin>>n;
    int m = n;
    vector<char> a,b;
    while (n--)
    {
        cin>>x;
        a.push_back(x);    
    }
    while (m--)
    {
        cin>>x;
        b.push_back(x);    
    }
    int count=0;
    for(int i = 0; i < a.size();i++)
    {
        count += m_diff(a[i],b[i]);
    }
    cout<<count;
}