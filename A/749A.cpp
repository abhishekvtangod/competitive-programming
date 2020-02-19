#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
typedef long long ll;

using namespace std;
main()
{
    int n;
    cin>>n;
    cout<<floor(n/2)<<endl;

    for(int i = 0; i < n/2-1;i++)
    {
        cout<<"2 ";
    }
    
    if(n%2 == 0)
    {
        cout<<"2";
    }
    else
    {
        cout<<"3";
        
    }
    

}