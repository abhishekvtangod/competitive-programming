#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>   
typedef long long ll;

using namespace std;
main()
{
    int q,x;
    cin>>q;
    map<string,int> mp;
    for(int i =0; i < q; i++)
    {   cin>>x;
        if(i % 3 == 0)
        {
            mp["chest"]+=x;
        }
        else if (i % 3 == 1)
        {
            mp["biceps"]+=x;
        }
        else if( i % 3 == 2)
        {
            mp["back"]+=x;
        }

        
        
    }
    int max = 0;
    string mx_str;
    for(auto it=mp.begin(); it != mp.end(); it++)
    {
        if(max < it->second)
        {
            max = it->second;
            mx_str = it->first;
        }
        // cout<<it->first<<" : "<<it->second<<endl;
    // cout<<max;
    
    }
    cout<<mx_str;

    
}