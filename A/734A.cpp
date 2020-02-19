#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int q;
    char ch;
    vector<char> v;
    cin>>q;
    for(int i =0;i< q;i++)
    {
        cin>>ch;
        v.push_back(ch);
    }
    int A = count(v.begin(),v.end(),'A');
    int D= count(v.begin(),v.end(),'D');
    // cout<<A<<D<<endl;
    if(A > D)
        cout<<"Anton";
    else if (D == A)
    {
        cout<<"Friendship";
    }
    
    else
    {
        cout<<"Danik";
    }
    

 
}