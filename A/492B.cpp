#include<iostream>
#include<vector>
#include<algorithm>
#include <iomanip>
using namespace std;
main()
{
    int a,b,x;
    cin>>a>>b;
    vector<int> v;
    while(a--)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    
    double max = 0;
    if(*v.begin() != 0)
    {
        max = (double)*v.begin();
    }
    // cout<<endl<<max<<endl;;
    if(*(v.end()-1) != b)
    {   double mx = (double)b - *(v.end()-1);
        if(max < mx)
        {
            max = (double)mx;
        }
    // cout<<endl<<max<<endl;;

    }

    double temp=0;
    for(auto it = v.begin(); it < v.end()-1; it++)
    {
        temp = (double)(*(it+1) - *it)/2;
        if(max < temp)
            max = temp;

    // cout<<endl<<max<<endl;;

    }
    cout << setprecision(10) <<fixed<<max;
}