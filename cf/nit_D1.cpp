#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int n,k,x;
    vector<int> v;
    cin>>n>>k;
    while (n--)
    {
        cin>>x;
        v.push_back(x);
    }
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end() && *it<=k ; it++);
    auto front = it;

    for(it = v.end()-1; it >= v.begin() && *it<=k ; it--);
    auto rear = it;

    int count = 0;
    for(it = front; it <= rear ; it++)
        count++;
    cout<<count<<endl;

    
    
  
}