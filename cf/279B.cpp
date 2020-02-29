#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int n,t,x;
    cin>>n>>t;
    vector<int> v;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    
    int sum = 0;
    int c=0,count=0,t_count=0;
    
    // for(auto r = v.end(); r >= v.begin(); r--)
    for(auto r = v.begin();r != v.end();r++)
    {   sum = 0;
        count = 0;
        for(auto l = r;l != v.end();l++)
        {
            
            sum += *l;
            count++;
            if(sum > t)
            {   count--;
                sum -= *l;
                break;
            }    
            // cout<<"----"<<endl;
            // cout<<"Count :"<<count<<"Sum :"<<sum<<endl;
            // cout<<"----"<<endl;

        }
        // cout<<"sum:"<<sum<<"this count:"<<count<<endl;
        if(c <= sum)
        {
            c = sum;
            
        }
        if(t_count <= count)
        {
            t_count = count;
        }

        // cout<<"c:"<<c<<endl;
        // cout<<"count:"<<count<<endl;

    }

// cout<<"c:"<<c<<endl;
        // cout<<"t_count:"<<t_count<<endl;
    cout<<t_count;


}