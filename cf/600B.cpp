#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
   int a,b,x;
   cin>>a>>b;
   vector<int> m,n;

   for(int i =0;i < a;i++)
   {
       cin>>x;
       m.push_back(x);

   }
   for(int i =0;i < b;i++)
   {
       cin>>x;
        n.push_back(x);

   }
    sort(m.begin(),m.end());

    for(auto it = n.begin(); it != n.end(); it++)
    {
        auto end = upper_bound(m.begin(),m.end(),*it)-1;
        cout<<end-m.begin()+1<<" ";
    }


    // cout<<endl;

    // for(auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // for(auto it = n.begin(); it != n.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    

}