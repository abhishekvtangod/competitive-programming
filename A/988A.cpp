#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>   
typedef long long int ll;

using namespace std;
main()
{
    ll n,k,x;
    cin>>n>>k;

    vector<int> v;
    set<int> s;
int i=0;
    while (n--)
    {   
        cin>>x;
        if(!s.count(x))
        {
            v.push_back(i+1);
            s.insert(x);
        }
        i++;
    }

    if (s.size() >= k)
    {
        cout<<"YES\n";
        for(int i = 0; i < k; i++)
        {
            cout<<v[i]<<" ";
        }

    }
    else
    {
        cout<<"NO";
    }
    
    
    
    
    // map<int,int> mp,ind; 
    // vector<int> v;
    // int i =1;
    // while (n--)
    // {
    //     cin>>x;
    //     mp[x]++;
    //     ind[x] = i;
    //     i++;
    // }


    // int t= mp.size();
    // if(t >= k)
    // {
    //     cout<<"YES\n";

    //     for (auto i = ind.begin(); i != ind.end(); i++)
    //     {
    //         v.push_back(i->second);
    //     }
    //     sort(v.begin(),v.end());
    //     for(int i = 0; i < k; i++)
    //         cout<<v[i]<<" ";
    // }
    // else
    // {
    //     cout<<"NO\n";
    // }
    // for (auto i = mp.begin(); i != mp.end(); i++)
    // {
    //     cout<<i->first<<" : "<<i->second<<endl;
    // }
    
    
    
    
}