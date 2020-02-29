#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


vector <int> a,b,c;

int main()
{   int n;
    cin>>n;

    while (n--)
    {
        int x;
        cin>>x;
        if(x == 0)
            c.push_back(x);
        else if (x > 0)
        {
            b.push_back(x);
        }
        else if (x < 0)
        {
            a.push_back(x);
        }  
    }

    if (a.size() % 2 == 0 )
    {
        c.push_back(a[a.size()-1]);
        a.pop_back();
    }
    if(b.size() == 0)
    {
        b.push_back(a[a.size()-1]);
        a.pop_back();
        
        b.push_back(a[a.size()-1]);
        a.pop_back();
    
    }
    


    
    cout<<a.size()<<" ";
    for(auto it = a.begin(); it != a.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<b.size()<<" ";

    for(auto it = b.begin(); it != b.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<c.size()<<" ";
        
    for(auto it = c.begin(); it != c.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    
    return 0;
}