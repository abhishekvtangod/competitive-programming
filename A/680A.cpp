#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
main()
{
 
    int a[6];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    int total=0;
    map<int,int> mp;
    for(int i=0;i < 5;i++)
    {
        mp[a[i]]++;
        total += a[i];
    }
    int max_sum=0;
        int max=0;    
    for(auto it = mp.begin(); it != mp.end(); it++)
    {   max_sum=0;
        if(it->second > 3)
        {
            max_sum+= it->first*3;
        }
        else if(it->second >= 2)
        {
            max_sum = it->first*it->second;
        }
        
        if(max < max_sum)
            max = max_sum;
        
        
    }
        cout<<total-max<<endl;

}