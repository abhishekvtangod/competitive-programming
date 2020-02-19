#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

main()
{   int q,a=0;
    char x;
    cin>>q;
    while(q--)
    {
        cin>>x;
        if(x == '1')
            a++;
        else
        {
                a--;
        }
        
        
    }
    cout<<abs(a);




    // vector<char> v;
    // while(q--)
    // {   
    //     cin>>x;
    //     v.push_back(x);
    // }
    
    // // for(int i = 0; i < v.size(); i++)
    // // {
    // //     if(v[i] != v[i+1])
    // //     {
    // //         v.erase(v.begin()+i);
    // //         v.erase(v.begin()+i);
    // //     }
    // // }
            
    // // cout<<endl;
    // // for(auto i = v.begin(); i != v.end(); i++)
    // // {   
    // //     for(auto j = v.begin(); j != v.end(); i++)
    // //     cout<<*i<<" ";
    // // }

    
}