#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int n,x;
    cin>>n;


    vector<int> a,b,c;
    for(int i =0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(int i =0; i < n-1; i++)
    {
        cin>>x;
        b.push_back(x);
    }  
    for(int i =0; i < n-2; i++)
    {
        cin>>x;
        c.push_back(x);
    }  
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    int flag = 0;
    for(int i = 0 ; i < n-1 ; i++)
    {
        if((a[i] ^ b[i]) != 0)
        {
            cout<<a[i]<<endl;
            // " "<<b[i]<<" "<<i<<" XOR:"<<(a[i] ^ b[i])<<endl;
            flag = 1;
            break;
        }
    }
    if(!flag)
    {
        cout<<a[n-1]<<endl;
    }
    flag = 0;
    for(int i = 0 ; i < n-2 ; i++)
    {
        if((b[i] ^ c[i]) != 0)
        {
            cout<<b[i]<<endl;
            flag = 1;
            break;
        }
    }
    if(!flag)
    {
        cout<<b[n-2]<<endl;
    }


    // map<int,int> mp,mp1,mp2;
    // for(int i =0; i <n ; i++)
    // {
    //     cin>>x;
        
    //         mp[x]++;
    // }
    // for(int i =0; i <n-1 ; i++)
    // {
    //     cin>>x;
        
    //         mp[x]--;
    // }
    // for(auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     if (it->second == 1)
    //     {
    //         cout<<it->first<<endl;
    //     }
    //     mp[x]--;
    // }

    // for(int i =0; i <n-2 ; i++)
    // {
    //     cin>>x;
        
    //         mp[x]--;
    // }
    // for(auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     if (it->second == 0)
    //     {
    //         cout<<it->first<<endl;
    //     }
    //     mp[x]--;
        
    // }
    // // for(auto it = mp.begin(); it!= mp.end();it++)
    // // {
    // //     for (auto i = mp1.begin(); i != mp1.end() ; i++)
    // //     {
    // //         if(it->second)
    // //     }
        
    // //     // cout<<it->first<<" "<<it->second<<endl;
    // // }



    // for(auto it = mp.begin(); it!= mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    

}