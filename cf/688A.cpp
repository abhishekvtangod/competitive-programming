#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int n,d;
    char x;
    cin>>n>>d;
    vector<char> v;
    for(int i =0;i < n*d;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int count = 0,max=0;
    for(int i = 0; i < d; i++)
    {   int flag=0;
        for(int j = 0; j < n; j++)
        {   
            if(v[j+(n*i)] == '0')
            {
                count++;
                flag = 1;
                break;
            }
            
            
            
            
        }

            if (!flag)
            {
                count=0;
            }
            if(max < count)
                max = count;
            // cout<<"level count: "<<count<<endl;

    }
    cout<<max;
}